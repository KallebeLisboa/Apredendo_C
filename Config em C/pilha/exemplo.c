#include <stdio.h>
#include <stdlib.h>

#define boolean int
#define TRUE 1
#define FALSE 0

typedef struct elem {
    int info;
    struct elem *lig;
} tipo_elem;

typedef struct {
    tipo_elem *topo;
} pilha;

// cria pilha
void create(pilha *p) {
    p->topo = NULL;
}

// testa se p está vazia
boolean isEmpty(pilha *p) {
    //se topo eh null entao esta vazia
    return (p->topo == NULL);
}

// imprime p
void imprime(pilha *p) {

    //usando um ponteiro auxiliar
    tipo_elem *x;
    x = p->topo;

    //iterando na pilha
    while(x != NULL) {
        printf("%d ", x->info);
        x = x->lig;
    }
    printf("\n");
}

// insere x no topo de p (empilha)
boolean push(pilha *p, int x) {

    tipo_elem *q = malloc(sizeof(tipo_elem));
    if (q == NULL)
        return FALSE;

    q->info = x;
    q->lig = p->topo;
    p->topo = q;
    return TRUE;
}

// remove do topo de p (desempilha)
boolean pop(pilha *p) {

    if (!isEmpty(p)) {
        p->topo = p->topo->lig;
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {

    //cria pilha
    pilha p;
    create(&p);
    printf("%d\n", isEmpty(&p));

    //empilha
    push(&p, 1);
    push(&p, 2);
    push(&p, 3);
    push(&p, 4);
    push(&p, 5);
    imprime(&p);

    //desempilha
    pop(&p);
    pop(&p);

    //imprime pilha
    imprime(&p);

    return 0;
}