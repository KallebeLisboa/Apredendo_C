//Condicionais

#include <stdio.h>
#include <stdlib.h>

int main(){

    float m;

    printf("Insira a nota do aluno: \n");
    scanf("%f", &m);

    if(m >= 7.0){
        printf("Aprovado !");
    } else {
        printf("Reprovado !");
    }

    return 0;
}
