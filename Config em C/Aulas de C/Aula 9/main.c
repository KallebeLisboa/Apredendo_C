#include <stdio.h>
#include <stdlib.h>

// Domine vetores (arrays)

int main(){

    int c;

    printf("Numero de valores: \n");
    scanf("%d", &c);

    int v[c];
    int i;



    for(i = 0; i<c; i++){
        printf("Insira um dado: \n");
        scanf("%d", &v[i]);
    }

    int media;


    for(i = 0; i<c; i++){
        media+=v[i];
    }

    media = media/c;

    printf("-------------------- \n\n");
    printf("%d", media);
    return 0;
}
