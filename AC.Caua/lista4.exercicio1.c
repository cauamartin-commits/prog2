#include<stdio.h>

// funcao main
int main(){
    // funcao x do enunciado
    int vet[10];

    // usuario digita 10 numeros
    for (int i = 0; i < 10; i++){
        printf("Digite um valor para a posicao %d do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    int y[10];
    int s = 0;

    // loop inverte valores na funcao y
    for (int i = 9; i >= 0; i--){
        y[i] = vet[s];
        s++;
    }

    // loop para printar item por item
    for (int index = 0; index < 10; index++){
        printf("%d ", y[index]);
    }

    return 0;
}