#include<stdio.h>


int main(void)
{
    // cria operador
    char operador;

    // pede ao usuario digitar o operador
    printf("DIGITE UM OPERADOR (+, -, /, *): ");
    scanf(" %c", &operador);

    // cria valor 1 e valor 2
    float valor1, valor2;

    // pede ao usuario os dois valores
    printf("DIGITE UM NUMERO: ");
    scanf("%f", &valor1);

    printf("DIGITE UM SEGUNDO NUMERO: ");
    scanf("%f", &valor2);


    // verifica o operador e faz a operacao
    if (operador == '+') {
        float soma = valor1 + valor2;
        printf("A soma de %f + %f = %f\n", valor1, valor2, soma);
    }

    if (operador == '-') {
        float subtracao = valor1 - valor2;
        printf("A subtracao de %f - %f = %f\n", valor1, valor2, subtracao);
    }

    if (operador == '*') {
        float multiplicacao = valor1 * valor2;
        printf("A multiplicacao de %f * %f = %f\n", valor1, valor2, multiplicacao);
    }

    if (operador == '/') {
        float divisao = valor1 / valor2;
        printf("A divisao de %f / %f = %f\n", valor1, valor2, divisao);
    }


    return 0;
}