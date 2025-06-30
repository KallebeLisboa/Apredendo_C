#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura de um nó da lista encadeada
typedef struct no {
    int dado;
    struct no *prox;
} no;

// --- FUNÇÃO PARA INSERIR NO INÍCIO (já discutida) ---
no* insereInicio(no **lista, int valor) {
    no *novoNo = (no *) malloc(sizeof(no));
    if (novoNo == NULL) {
        printf("Erro ao alocar memória!\n");
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
    char comando;      // Variável para armazenar o comando (I, F, P, D, X)
    int valor;         // Variável para armazenar o valor a ser inserido (para I e F)

    // Loop principal para ler e processar os comandos
    while (1) {
        scanf(" %c", &comando); // Lê o comando

        if (comando == 'I') {
            // O que você faria aqui para ler o 'valor' e chamar a função 'insereInicio'?
            // Lembre-se que 'scanf' precisa do '&' para o endereço da variável.
            // E a função 'insereInicio' espera um ponteiro para ponteiro para 'lista'.
            // Você passaria '&lista' para a função.
            // ...
        }
        // ... (aqui entrariam os 'else if' para os outros comandos)

        else if (comando == 'X') { // Comando para finalizar
            break; // Sai do loop 'while(1)'
        }
    }

    // Após o loop, a questão pede para exibir a lista resultante.
    // ...

    return 0;
}
