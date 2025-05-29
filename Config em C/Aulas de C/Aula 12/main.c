#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Aprendendo Structs

#define TAM 50

struct tipo_pessoa{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;


int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Criando e Inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Início: \n");


    printf("%d \n", pes.idade);
    printf("%.2f \n", pes.peso);
    printf("%s \n", pes.nome);

    printf("\n \n");

    //Atribuindo valores

    pes.idade = 35;
    pes.peso = 70.623;
    strcpy(pes.nome, "Sabrina");

    printf("%d \n", pes.idade);
    printf("%.2f \n", pes.peso);
    printf("%s \n", pes.nome);

    printf("\n \n");

    //Insercão via teclado
    printf("Digite seu idade: \n");
    scanf("%d", &pes.idade);
    printf("Digite seu peso: \n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("Digite seu peso: \n");
    scanf("%s", &pes.nome);

    printf("%d \n", pes.idade);
    printf("%.2f \n", pes.peso);
    printf("%s \n", pes.nome);

    return 0;
}
