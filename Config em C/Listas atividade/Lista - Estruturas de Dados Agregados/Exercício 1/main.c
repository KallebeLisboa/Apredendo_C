#include <stdio.h>
#include <stdlib.h>


typedef struct{
    char descricao[20];
} TipoPoder;

typedef struct{
    int id;
    char nome[20];
    float forca;
    TipoPoder poder;
} TipoLutador;


void preenchaVetorLutadores(TipoLutador* lutadores, int n){
    int i;
    getchar();
    for (i = 0; i < n; i++){

        char input[100];
        fgets(input, sizeof(input), stdin);

        sscanf(input, "%d %s %f %s",  &lutadores[i].id, lutadores[i].nome, &lutadores[i].forca, lutadores[i].poder.descricao);

    }
}


int main(){

    scanf("%d", &n_jogadores);

    TipoLutador lutadores_2[n_jogadores];

    preenchaVetorLutadores(lutadores_2, n_jogadores);

    }

