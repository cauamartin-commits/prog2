#include<stdio.h>

int main ()
{
    // cria variaveis inteiras x e z
    int x, z;
    // pede para o usuario digitar o valor de x
    printf("Digite o valor x: ");
    scanf("%d", &x);

    // do while para repetir enquanto z for menor que x
    do {
        printf("Digite o valor z: ");
        scanf("%d", &z);
    } while (z < x);

    // variveis inteiras soma e soma n
    int soma = 0;
    int soma_n = 0;
    // loop que soma x a soma e soma + 1 a soma n
    for (x; soma <= z; x++)
    {
        soma += x;
        soma_n += 1;
    }

    // imprime soma_n
    printf("%d\n", soma_n);

    return 0;
}