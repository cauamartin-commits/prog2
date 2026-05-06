#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // criando vetor aleatorio, com tamanho par
    srand(time(NULL));

    int n;

    n = (rand() % 10 + 1) * 2;

    int vetor[n];

    // inicializando com valores aleatórios
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 100;
    }

    for (int esq = 0, dir = n - 1; esq < dir; esq++, dir--) {
        printf("Esq (%d): %d | Dir (%d): %d\n", esq, vetor[esq], dir, vetor[dir]);
    }

    printf("Chegou no meio!\n");
    printf("Valores centrais: %d e %d\n", vetor[n/2 - 1], vetor[n/2]);
    
    return 0;
}