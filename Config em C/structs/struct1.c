#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x, y, z;
} ponto;

//passagem por valor
void atribui_valor0(ponto p0) {
  p0.x = 10;
  p0.y = 20;
  p0.z = 30;
}

//passagem por referencia
void atribui_referencia(ponto *p1) { //basta usar o *
  (*p1).x = 40; //continua usando o *
  (*p1).y = 50; //continua usando o *
  p1->z = 60; //a notacao permite substituir o * por "->"
}

int main() {

  ponto p0;
  atribui_valor0(p0);
  printf("Valor = %d\n", p0.x);
  printf("Valor = %d\n", p0.y);
  printf("Valor = %d\n", p0.z);

  ponto p1;
  atribui_referencia(&p1); //& pq precisamos passar o endereco
  printf("Valor = %d\n", p1.x);
  printf("Valor = %d\n", p1.y);
  printf("Valor = %d\n", p1.z);

  return(0);
}