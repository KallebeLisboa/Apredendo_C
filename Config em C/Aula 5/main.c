#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Operações lógicas: disjunção, conjunção e negação

int main(){

    float nota = 0.0;

    printf("Digite uma nota: \n");
    scanf("%f", &nota);

    if (nota >= 7.0) {
        printf("Aprovado!");
    }
    if (nota >= 4.0 && nota < 7.0 && nota != 5.0){
        printf("Recuperação!");
    }
    if (nota == 5.0){
        printf("5: um bom numero");
    }
    if (nota < 4.0) {
        printf("Reprovado! \n");
        printf("Digite a materia reprovada: ");
        char materia[50];
        scanf("%s", materia);
        if (strcmp(materia, "por") == 0 || strcmp(materia, "mat") == 0) {
            printf("Segunda chance");
        } else {
            printf("Boa sorte na proxima");
        }
    }

    return 0;
}
