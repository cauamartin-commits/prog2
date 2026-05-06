#include<stdio.h>

// funcao mdc
int mdc (int x, int y)
{
    // variavel divisor = 0
    int divisor = 0;
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            divisor = i;
        }
    }

    return divisor;
}

int main ()
{
    // variaveis x e y
    int x, y;
    printf("Digite um numero: ");// usuario digita x
    scanf("%d", &x);

    printf("Digite um numero: ");// usuario digita y
    scanf("%d", &y);

    int div = mdc(x, y);// variavel div chama funcao
    printf("%d\n", div);// imprime div
   
    return 0;
}