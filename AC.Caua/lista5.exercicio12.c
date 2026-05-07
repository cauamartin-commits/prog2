#include<stdio.h>

int main(){
    // declarando i e j
    int i;
    int j;
    // declarando string com ate 50
    char s[50];
    printf("Digite algo: ");
    // pedindo ao usuario
    scanf(" %[^\n]", s);

    for (i = 0; s[i] != '\0' ; i++)
    {
        int apareceu = 0; // variavel booleana inteira

        // loop para verificar se ja apareceu
        for (j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                apareceu = 1;
            }
        }

        // se apareceu, mudar iteracao
        if (apareceu == 1) {
            continue;
        }

        // cria variavel inteira para contar
        int contador = 0;
        // loop que roda contado
        for (j = 0; s[j] != '\0'; j++)
        {
            if (s[i] == s[j])
            {
                contador++;
            }
        }

        // imprime
        printf("'%c' = %d", s[i], contador);

        // variavel booleana inteira final
        int final = 1;

        for (j = i + 1; s[j] != '\0'; j++) {
            apareceu = 0;

            // verifica
            for (int k = 0; k <= i; k++) {
                if (s[j] == s[k]) {
                    apareceu = 1;
                }
            }

            if (apareceu == 0) {
                final = 0;
            }
        }

        // imprime virgula
        if (final == 0) {
            printf(", ");
        }

    }

    return 0;
}