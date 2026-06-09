#include <stdio.h>

#define TAM 3

void somarMatrizes(int A[TAM][TAM], int B[TAM][TAM], int resultado[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = A[i][j] + B[i][j];
        }
    }
}

void calcularDiagonais(int A[TAM][TAM], int B[TAM][TAM], int *somaA, int *somaB) {
    *somaA = 0;
    *somaB = 0;
    
    for (int i = 0; i < TAM; i++) {
        *somaA += A[i][i];
        *somaB += B[i][i];
    }
}

void multiplicarMatrizes(int A[TAM][TAM], int B[TAM][TAM], int resultado[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i][j] = 0;
        }
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            for (int k = 0; k < TAM; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void imprimirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[TAM][TAM] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int matrizB[TAM][TAM] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    int matrizSoma[TAM][TAM] = {0};
    int matrizMult[TAM][TAM] = {0};
    int somaDiagA = 0, somaDiagB = 0;

    printf("--- Matriz A ---\n");
    imprimirMatriz(matrizA);
    
    printf("\n--- Matriz B ---\n");
    imprimirMatriz(matrizB);

    somarMatrizes(matrizA, matrizB, matrizSoma);
    printf("\n=== a) Soma de A + B ===\n");
    imprimirMatriz(matrizSoma);

    calcularDiagonais(matrizA, matrizB, &somaDiagA, &somaDiagB);
    printf("\n=== b) Soma das Diagonais (Principais) ===\n");
    printf("Soma da diagonal de A: %d\n", somaDiagA);
    printf("Soma da diagonal de B: %d\n", somaDiagB);

    multiplicarMatrizes(matrizA, matrizB, matrizMult);
    printf("\n=== c) Multiplicao de A x B ===\n");
    imprimirMatriz(matrizMult);

    return 0;
}