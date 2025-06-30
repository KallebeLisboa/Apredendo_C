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

// Procedimento para inserir no fim

void inserir_no_fim(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo -> valor = num;
        novo -> proximo = NULL;

        // � o primeiro?
        if(*lista == NULL){
            *lista = novo;
        } else{
            aux = *lista;
            while(aux -> proximo){
                aux = aux-> proximo;
            }
            aux-> proximo = novo;
        }

    } else {
        printf("Erro ao alocar memoria! \n");
    }
}

// Procedimento inserir no meio

void inserir_no_meio(No **lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;

        //� o primeiro ?
        if(*lista == NULL){
            novo -> proximo = NULL;
            *lista = novo;
            aux = *lista;
            while(aux-> valor != ant && aux->proximo){
                aux = aux->proximo;
            }
            novo -> proximo = aux->proximo;
            aux->proximo = novo;
        } else {

        }

    } else{
        printf("Erro ao alocar memoria! \n");
    }

}


int main()
{
    printf("Hello world!\n");
    return 0;
}
