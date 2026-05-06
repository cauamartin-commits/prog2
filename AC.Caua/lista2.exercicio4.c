#include<stdio.h>
#include<time.h>

int main()
{
    // variavel letra escolhida
    char letra_escolhida;

    srand(time(NULL)); // inicializa
    char letra = 'a' + rand() % 26; // escolhe letra aleatoria
    printf("Digite a letra escolhida por voce: "); // letra que tenta ser a mesma digitada pelo usuario
    scanf(" %c", &letra_escolhida);

    // loop para verificiar se e a mesma letra
    while (letra_escolhida != letra)
    {
        if (letra_escolhida < letra)
        {
            printf("A letra alvo e maior\n");
        }
        else
        {
            printf("A letra alvo e menor\n");
        }

        printf("Digite a letra escolhida por voce: ");
        scanf(" %c", &letra_escolhida);
    }

    // decisao se a letra for igual, imprime
    if (letra_escolhida == letra)
    {
        printf("Voce acertou a letra!\n");
    }
    
    return 0;
}