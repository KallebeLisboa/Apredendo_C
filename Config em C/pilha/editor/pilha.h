#define TRUE 1
#define FALSE 0
#define boolean int
#define TamPilha 100

typedef char elem;

typedef struct {
    int topo;
    elem A[TamPilha];
} Pilha;

void Create(Pilha*);

void Empty(Pilha*);

boolean IsEmpty(Pilha*);

boolean IsFull(Pilha*);

boolean Push(Pilha*, elem*);

boolean Pop(Pilha*, elem*);
