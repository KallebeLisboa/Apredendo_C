#include <stdio.h>
#include <stdlib.h>

// Comando For

int main(){

    int i;
    int j;

    scanf("%d", &i);
    scanf("%d", &j);

    for(i; i<=j; i++){
        printf("%d - ", i);
    }
    return 0;
}
