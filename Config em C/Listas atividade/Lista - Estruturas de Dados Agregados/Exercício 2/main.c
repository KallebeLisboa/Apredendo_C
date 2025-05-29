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

void fight(const TipoLutador* timeA, const TipoLutador* timeB, int n, TipoLutador* vencedores){
    for(int i=0; i<n; i++){
        if (timeA[i].forca > timeB[i].forca){
            vencedores[i] = timeA[i];
        } else {
            vencedores[i] = timeB[i];
        }
    }
}

int main(){

    scanf("%d", &n_jogadores);

    TipoLutador lutadores_A[n_jogadores];
    TipoLutador lutadores_B[n_jogadores];
    TipoLutador vencedor[n_jogadores];

    preenchaVetorLutadores(lutadores_A, n_jogadores);
    preenchaVetorLutadores(lutadores_B, n_jogadores);

    }

