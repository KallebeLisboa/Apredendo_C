#include <stdio.h>
#include <stdlib.h>

int main(){

    int inicio = 0;
    int fim = 0;

    printf("Digite um valor inicial: \n");
    scanf("%d", &inicio);

    printf("Digite um valor final: \n");
    scanf("%d", &fim);

    printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");


    while(inicio <= fim){
        printf("%d \n", inicio);
        inicio ++;
    }
    return 0;
}
