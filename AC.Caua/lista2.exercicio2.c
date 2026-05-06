#include<stdio.h>

int main()
{
    // inicializa soma = 0
    int soma = 0;
    // cria variaveis inteiras n e i
    int n;
    int i;

    // pede para digitar o valor de n imparaes
    printf("Digite o valor de n impares: ");
    scanf("%d", &n);

    for (i = 1; i <= 2 * n; i++){
        if (i % 2 != 0) {
            soma += i;
        }
    }
    // imprime a soma
    printf("%d\n", soma);

    return 0;
}