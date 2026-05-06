#include<stdio.h>

int main(void)
{
    // declarando valor inteiro
    int valor_inteiro;

    // pedindo ao usuario o valor inteiro
    printf("Digite um numero inteiro em segundos: ");
    scanf("%d", &valor_inteiro);

    // descobrindo em horas
    int horas = valor_inteiro / 3600;

    // descobrindo em minutos pelo resto em horas
    int minutos = (valor_inteiro % 3600) / 60;

    // descobrindo os segundos que e o resto dos minutos
    int segundos = valor_inteiro % 60;

    // imprimindo
    printf("%d horas, %d minutos e %d segundos\n",horas,minutos,segundos);

    return 0;
}