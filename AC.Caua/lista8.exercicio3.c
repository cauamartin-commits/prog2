#include <stdio.h>
#include <stdlib.h>

void lerMatriz(int **matriz, int n);
void imprimirMatriz(int **matriz, int n);
int verificarSimetria(int **matriz, int n);

int main() {
    int **matriz;
    int n, i;

    printf("Digite a ordem da matriz quadrada: ");
    scanf("%d", &n);

    matriz = malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        matriz[i] = malloc(n * sizeof(int));
    }

    lerMatriz(matriz, n);

    printf("\nMatriz:\n");
    imprimirMatriz(matriz, n);

    if (verificarSimetria(matriz, n)) {
        printf("\nA matriz e simetrica.\n");
    } else {
        printf("\nA matriz nao e simetrica.\n");
    }

    for (i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

void lerMatriz(int **matriz, int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int **matriz, int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

int verificarSimetria(int **matriz, int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return 0;
            }
        }
    }

    return 1;
}