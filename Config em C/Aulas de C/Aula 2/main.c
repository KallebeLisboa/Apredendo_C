// INPUTS

#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade = 0;
    char nome[50] = "";
    float peso = 0.0;

    printf("Valor inicial da idade: %d.\n", idade);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Ola %s, sua idade e %d e seu peso e %.2f. \n", nome, idade, peso);
    return 0;
}
