#include <stdio.h>
#include <stdlib.h>


typedef struct no {
    int valor;
    struct no *proximo;
} No;

// procedimento para inserir no in�cio

void inserir_no_inicio(No **lista, int num) {
    No *novo = malloc(sizeof(No));

    if (novo){
        novo -> valor =  num;
        novo -> proximo =  *lista;
        *lista = novo;
    } else{
        printf("Erro ao alocar memoria! \n");
    }

}


int main()
{
    printf("Hello world!\n");
    return 0;
}
