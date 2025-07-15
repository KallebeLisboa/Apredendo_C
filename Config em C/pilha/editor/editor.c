#include <stdio.h>
#include "pilha.h"

int main() {

    elem c, x;
    Pilha P;
    
    Create(&P);
    printf("Digite seu texto: ");
    
    while (scanf("%c", &c) != EOF && c != '\r') {
        if (c=='#') {
            if (Pop(&P,&x))
                printf("(%c desempilhado) ",x);
            else
                printf("erro");
        } else if (c=='@') {
            Empty(&P);
            printf("(pilha esvaziada) ");
        } else {
            if (!Push(&P,&c))
                printf("(erro) ");
        }
    }

    printf("\n\nDesempilhando tudo: ");
    while (!IsEmpty(&P)) {
        if (Pop(&P,&x))
            printf("%c ",x);
        else printf("erro ");
    }

    return 0;
}