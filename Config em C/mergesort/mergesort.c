#include<stdio.h>
#include<stdlib.h>


//codigo retirado da wikipedia
//complexidade O(nlog(n))

void merge(int vetor[], int comeco, int meio, int fim) {
    
    int com1 = comeco, com2 = meio+1;
    int comAux = 0, tam = fim-comeco+1;

    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));

    while(com1 <= meio && com2 <= fim) {
        if(vetor[com1] < vetor[com2]) {
            vetAux[comAux] = vetor[com1];
            com1++;
        } else {
            vetAux[comAux] = vetor[com2];
            com2++;
        }
        comAux++;
    }

    //Caso ainda haja elementos na primeira metade
    while(com1 <= meio){
        vetAux[comAux] = vetor[com1];
        comAux++;
        com1++;
    }

    //Caso ainda haja elementos na segunda metade
    while(com2 <= fim) {
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }

    //Move os elementos de volta para o vetor original
    for(comAux = comeco; comAux <= fim; comAux++){    
        vetor[comAux] = vetAux[comAux-comeco];
    }
    
    free(vetAux);
}

void mergeSort(int vetor[], int comeco, int fim){
    if (comeco < fim) {
        int meio = (fim+comeco)/2;

        mergeSort(vetor, comeco, meio);
        mergeSort(vetor, meio+1, fim);
        merge(vetor, comeco, meio, fim);
    }
}

int main() {

    int v[] = {1, 10, 9,  7, 3, 0};
    //int v[] = {1, 10, 9,  7, 3, 0, 4, 5, 6, 8, 11};
    int i;

    mergeSort(v, 0, 5);
    for(i=0;i<6;i++)
        printf("%d ",v[i]);
    return 0;
}