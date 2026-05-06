#include <stdio.h>
void lerValores(int *vet) {
    int i;
    for(i=0;i<7;i++) {
        printf("Digite um numero");
        scanf("%d", &vet[i]);
    }
}

void imprimirVetor(int *vet) {
    int i;
    for(i=0;i<7;i++){
        printf("V[%d] = %d\n", i, vet[i]);
    }
}

int pesquisarVetor(int n, int *vet) {
    int isTrue = -1;
    int i;
    for(i=0;i<7;i++) {
        if(vet[i] == n) {
            isTrue = i;
            break;
        }
    }
    
    return isTrue;
}

void trocaVetor(int *vet) {
    int i;
    for(i = 1; i < 7; i++) {
        vet[i] += vet[i-1];
    }
}

int main() {
    int vet[] = {1,2,3,4,5,6,7};
    int i, num;

    lerValores(vet);

    printf("\nVetor original:\n");
    imprimirVetor(vet);

    printf("\nDigite um valor para buscar: ");
    scanf("%d", &num);

    int p = pesquisarVetor(num, vet);

    if(p != -1) {
            printf("Valor encontrado na posicao %d\n", p);
    } else {
            printf("Valor nao encontrado\n");
    }

    trocaVetor(vet);

    printf("\nVetor apos soma acumulada:\n");
    imprimirVetor(vet);

    return 0;
}