#include <stdio.h>
#include <string.h>

#define MAX_ENTRADAS 1001

typedef struct {
    char pais[100];
    char local[100];
    int qtVisitas;
} TipoLocal;

int buscarRegistro(TipoLocal registros[], int tamanho, char *pais, char *local) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(registros[i].pais, pais) == 0 && strcmp(registros[i].local, local) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // Para consumir o '\n' após a leitura do número

    TipoLocal registros[MAX_ENTRADAS];
    int numRegistros = 0;

    for (int i = 0; i < N; i++) {
        char linha[101];
        fgets(linha, sizeof(linha), stdin);

        char pais[100], local[100];
        sscanf(linha, "%s %[^\n]", pais, local); // Extraindo o país e o nome do lugar visitado

        int indice = buscarRegistro(registros, numRegistros, pais, local);
        if (indice == -1) {
            strcpy(registros[numRegistros].pais, pais);
            strcpy(registros[numRegistros].local, local);
            registros[numRegistros].qtVisitas = 1;
            numRegistros++;
        } else {
            registros[indice].qtVisitas++;
        }
    }

    for (int i = 0; i < numRegistros; i++) {
        printf("%s %d\n", registros[i].pais, registros[i].qtVisitas);
    }

    return 0;
}
