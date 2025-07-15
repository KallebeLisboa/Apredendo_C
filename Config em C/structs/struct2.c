#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x, y, z;
} ponto;

//passagem por referencia
void atribui_referencia1(ponto *p1, int n) { //tem que colocar o asterisco
                                             //pq he passagem por referencia 

  for(int i=0; i<n; i++) {
    p1[i].x = 70;   //pq aqui nao precisa de * se no outro codigo tinha??
    p1[i].y = 80;   // a resposta eh simples mas veremos mais pra frente no curso
    p1[i].z = 90;   //por hora eh importante saber que vetor a gente trata como
                    //vetor
  }

}

//passagem por referencia
void atribui_referencia2(ponto p2[], int n) {

  for(int i=0; i<n; i++) {
    p2[i].x = 70;
    p2[i].y = 80;
    p2[i].z = 90;
  }

}

//passagem por referencia
void atribui_referencia3(ponto p3[10], int n) {

  for(int i=0; i<n; i++) {
    p3[i].x = 70;
    p3[i].y = 80;
    p3[i].z = 90;
  }

}

int main() {

  ponto p1[10];

  atribui_referencia1(p1);  //nao preciso do &  pq? 
  printf("Valor = %d\n", p1[1].x);
  printf("Valor = %d\n", p1[1].y);
  printf("Valor = %d\n", p1[1].z);

  ponto p2[10];

  atribui_referencia2(p2); // alguem sabe pq nao precisa do &?
  printf("Valor = %d\n", p2[1].x);
  printf("Valor = %d\n", p2[1].y);
  printf("Valor = %d\n", p2[1].z);

  ponto p3[10];

  atribui_referencia3(p3); /* nao precisa pq a declaracao de um vetor em c 
                            ja eh um ponteiro para a primeira posicao, 
                            portanto p3 ja eh um endereco. sacou??? */

  printf("Valor = %d\n", p3[1].x);
  printf("Valor = %d\n", p3[1].y);
  printf("Valor = %d\n", p3[1].z);

  return(0);
}