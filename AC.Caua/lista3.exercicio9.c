#include <stdio.h>

// funcao principal
int main(){
    // declarando vetor
    int pulo[] = {1, 2, 3, 4, 6};
    // imprimindo na tela o terceiro elemento
    printf("%d\n", *(pulo + 2));

    // imprimindo a alternativa correta
    printf("O *(pulo + 2) se referencia ao terceiro elemento");

    return 0;
}