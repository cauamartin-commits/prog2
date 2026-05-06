#include<stdio.h>

int main (void)
{
    // cria variavel numero
    int numero;

    // pede para o usuario digitar um numero
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // decisao para saber se o numero e primo
    if (numero <= 1){
        printf("O numero nao e primo");
        return 0;
    }

    // loop para saber se e primo
    for (int i = 2; i < numero; i++){
        if (numero % i == 0) {
            printf("O numero %d nao e primo\n", numero);
            return 0;
        }
    }

    // imprime primo
    printf("%d e primo\n", numero);

    return 0;
}