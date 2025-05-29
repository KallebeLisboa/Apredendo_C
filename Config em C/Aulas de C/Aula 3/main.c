//CALCULOS NUMÉRICOS

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, soma, sub, mult;
    float divs;

    printf("Digite um numero A: \n");
    scanf("%d", &A);

    printf("Digite um numero B: \n");
    scanf("%d", &B);

    soma = A + B;
    sub = A - B;
    mult = A * B;
    divs = A / B;

    printf("Resultados: \n");
    printf("soma: %d. \n", soma);
    printf("Subtração: %d. \n", sub);
    printf("Multiplicação: %d. \n", mult);
    printf("Divisao:  %.2f. \n", divs);

    int dado = 10;
    printf("Valor inicial do dado: %d. \n", dado);

    dado += 1;
    printf("Valor atual: %d. \n", dado);

    dado -= 3;
    printf("Valor atual: %d. \n", dado);

    dado *= 4;
    printf("Valor atual: %d. \n", dado);

    dado /= 2;
    printf("Valor atual: %d. \n", dado);

    dado ++;
    printf("Valor atual: %d. \n", dado);

    dado--;
    printf("Valor atual: %d. \n", dado);


    return 0;
}
