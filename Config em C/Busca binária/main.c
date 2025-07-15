#include <stdio.h>

struct aluno{
    int mat;
    char nome[30];
    float n1,n2,n3;
};
int buscaBinaria(struct aluno *A,int N,int m){
    int inicio,meio,fim;
    inicio =0;
    fim = N-1;
    struct aluno *ptr = A;
    while(inicio<=fim){
        meio = (inicio+fim)/2;
        if (m < ptr->mat){
            fim = meio-1;
            ptr++;
        }else
            if (m > ptr->mat){
                inicio = meio+1;
                ptr++;
            }else
                return(meio);
}
return(-1);
}


int main(){
struct aluno v[6];

for (int i=0;i<6;i++){
    scanf("%d %s %f",&v[i].mat,v[i].nome,&v[i].n1);
}
int x = buscaBinaria(v,6,44);
printf("%d\n",x);
return 0;

}
