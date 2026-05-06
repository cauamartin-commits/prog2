#include<stdio.h>

// funcao que calcula o salario semanal e a retorna
float calculo_semanal(int h, float dinheiro)
{
    // variavel calculo
    float calculo;
    // se o calculo for menor ou igual a 40, faca
    if (h <= 40)
    {
        calculo = h * dinheiro;
    }
    // calculo se as horas estiverem entre 40 a 60
    if (h > 40 && h <= 60)
    {
        float ultrapassou = (h - 40) * dinheiro * 1.5f;
        calculo = (40 * dinheiro) + ultrapassou;
    }

    // calculo se passar de 60
    if (h > 60)
    {
        float ultrapassou1 = 20 * dinheiro * 1.5f;
        float ultrapassou2 = (h - 60) * dinheiro * 2.0f;
        calculo = (40 * dinheiro) + ultrapassou1 + ultrapassou2;
    }

    return calculo;
}

// funcao principal
int main ()
{
    // variavel inteira horas
    int horas;
    // variavel float valor (salario/h)
    float valor;

    // do while que pede o valor das horas e a quantidade de horas
    do {
        printf("Digite a quantidade de horas por semana: ");
        scanf("%d", &horas);

        printf("Digite o valor de uma hora: ");
        scanf("%f", &valor);
    } while (horas <= 0 || valor <= 0);

    // variavel que chama a funcao do calculo semanal
    float salario_semanal = calculo_semanal(horas, valor);

    // imprime o calculo do salario da semana
    printf("O salario semanal do funcionario e de %.2f\n", salario_semanal);

    return 0;
}   