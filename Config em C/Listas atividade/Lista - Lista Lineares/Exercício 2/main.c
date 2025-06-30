#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura de um n� da lista encadeada
typedef struct no {
    int dado;
    struct no *prox;
} no;

// --- FUN��O PARA INSERIR NO IN�CIO (j� discutida) ---
no* insereInicio(no **lista, int valor) {
    no *novoNo = (no *) malloc(sizeof(no));
    if (novoNo == NULL) {
        printf("Erro ao alocar mem�ria!\n");
        exit(1);
    }
    novoNo->dado = valor;
    novoNo->prox = *lista;
    *lista = novoNo;
    return *lista;
}
// ----------------------------------------------------

int main() {
    no *lista = NULL; // Lista inicialmente vazia
    char comando;      // Vari�vel para armazenar o comando (I, F, P, D, X)
    int valor;         // Vari�vel para armazenar o valor a ser inserido (para I e F)

    // Loop principal para ler e processar os comandos
    while (1) {
        scanf(" %c", &comando); // L� o comando

        if (comando == 'I') {
            // O que voc� faria aqui para ler o 'valor' e chamar a fun��o 'insereInicio'?
            // Lembre-se que 'scanf' precisa do '&' para o endere�o da vari�vel.
            // E a fun��o 'insereInicio' espera um ponteiro para ponteiro para 'lista'.
            // Voc� passaria '&lista' para a fun��o.
            // ...
        }
        // ... (aqui entrariam os 'else if' para os outros comandos)

        else if (comando == 'X') { // Comando para finalizar
            break; // Sai do loop 'while(1)'
        }
    }

    // Ap�s o loop, a quest�o pede para exibir a lista resultante.
    // ...

    return 0;
}
