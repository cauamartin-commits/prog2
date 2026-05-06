#include<stdio.h>

// prototipo
int divs(int n, int *max, int *min);


// funcao principal
int main (){
    int n;
    int max;
    int min;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // chamando a funcao divis
    divs(n, &max, &min);

    return 0;
}

int divs(int n, int *max, int *min)
{
    int contador = 0;
    int menor = n - 1;
    int maior = 2;

    // loop que verifica
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            contador += 1;
        }

        if (n % i == 0 && i < menor && i != n)
        {
            menor = i;
        }
        
        if(n % i == 0 && i > maior && i != n)
        {
            maior = i;
        }
    }

    if (contador == n)
    {
        return 0;
    }
    else
    {
        *max = menor;
        *min = maior;
        return 1;
    }
}