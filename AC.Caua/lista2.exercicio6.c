#include<stdio.h>
#include<time.h>

int main()
{
    // declara variaveis n e soma, n como lixo e soma = 0
    int n;
    int soma = 0;

    srand(time(NULL)); // inicializa
    int numero = rand() % 101; // escolhe numero aleatorio
    
    // pede ao usuario
    printf("Digite um numero cujo pode ser o valor: ");
    scanf("%d", &n);

    // verifica se o numero e menor ou maior
    while (n != numero)
    {
        if (numero < n)
        {
            printf("O numero sorteado e menor\n");
            soma += 1;
        }
        if (numero > n)
        {
            printf("O numero sorteado e maior\n");
            soma += 1;
        }

        printf("Digite um numero cujo pode ser o valor: ");
        scanf("%d", &n);
    }

    // mostra a quantidade de vezes e o numero sorteado
    printf("O numero foi %d com %d tentativas\n", n, soma + 1);
    return 0;
}