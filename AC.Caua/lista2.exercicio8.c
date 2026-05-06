#include<stdio.h>

int main()
{
    // cria variavel inteira i
    int i = 1000;
    for (i; i <= 9999; i++)
    {
        // divide por 100
        int divide = i / 100;
        int resto = i % 100; // pega o resto
        
        // uniao dos dois digitos
        int soma = divide + resto;
        // se a soma vezes ela mesma for igual ao numero que a compoe
        if (soma * soma == i)
        {
            printf("%d\n", i);// imprima o numero
        }
    }

    return 0;
}