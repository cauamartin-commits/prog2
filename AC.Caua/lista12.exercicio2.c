#include <stdio.h>

int somaImpares(int *vetor, int tamanho) {
    if (tamanho == 0) {
        return 0;
    }

    if (*vetor % 2 != 0) {
        return *vetor + somaImpares(vetor + 1, tamanho - 1);
    } else {
        return somaImpares(vetor + 1, tamanho - 1);
    }
}

int main() {
    int tamanho = 10; 
    int meuVetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int resultado = somaImpares(meuVetor, tamanho);

    printf("A soma dos numeros impares do vetor e: %d\n", resultado);

    return 0;
}