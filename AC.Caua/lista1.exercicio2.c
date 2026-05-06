#include<stdio.h>


int main(void)
{
    // criando variaveis inteiras
    int valor1, valor2, valor3;

    // pedindo para digitar o primeiro valor
    printf("Digite um valor: ");
    scanf("%d", &valor1);

    // pedindo para digitar o segundo valor
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    
    // pedindo para digitar o terceiro valor
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    // variavei maior igual o primeiro valor
    int maior = valor1;

    // se valores forem maior do que o maior, maior = a esse valor
    if (valor2 > maior) {
        maior = valor2;
    }

    if (valor3 > maior) {
        maior = valor3;
    }

    // imprime o maior
    printf("Maior: %d\n", maior);

    // variavei menor igual o primeiro valor
    int menor = valor1;

    // se valores forem menor do que o menor, menor = a esse valor
    if (valor2 < menor) {
        menor = valor2;
    }

    if (valor3 < menor) {
        menor = valor3;
    }

    // imprime menor
    printf("Menor: %d\n", menor);

    // verifica se e par e imprime
    if (valor1 % 2 == 0) {
        printf("O valor %d e par\n", valor1);
    }

    if (valor2 % 2 == 0) {
        printf("O valor %d e par\n", valor2);
    }

    if (valor3 % 2 == 0) {
        printf("O valor %d e par\n", valor3);
    }

    // calcula a media e imprime
    float media = (valor1 + valor2 + valor3) / 3;
    printf("Media %f\n", media);



    return 0;
}