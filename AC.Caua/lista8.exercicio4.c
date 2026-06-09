#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **nomes = NULL;
    char buffer[100];
    int qtd = 0;
    double media = 0.0, variancia = 0.0;

    while (1) {
        printf("Digite um nome (ou 'fim' para encerrar): ");
        fgets(buffer, sizeof(buffer), stdin);

        buffer[strcspn(buffer, "\n")] = '\0';

        if (strcmp(buffer, "fim") == 0)
            break;

        nomes = realloc(nomes, (qtd + 1) * sizeof(char *));
        if (nomes == NULL) {
            printf("Erro de alocacao!\n");
            return 1;
        }

        nomes[qtd] = malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(nomes[qtd], buffer);

        qtd++;
    }

    if (qtd == 0) {
        printf("Nenhum nome foi informado.\n");
        free(nomes);
        return 0;
    }

    for (int i = 0; i < qtd; i++) {
        media += strlen(nomes[i]);
    }

    media /= qtd;

    for (int i = 0; i < qtd; i++) {
        double tamanho = strlen(nomes[i]);
        variancia += (tamanho - media) * (tamanho - media);
    }

    variancia /= qtd;

    printf("\nMedia dos tamanhos: %.2f\n", media);
    printf("Variancia dos tamanhos: %.2f\n", variancia);

    for (int i = 0; i < qtd; i++) {
        free(nomes[i]);
    }
    free(nomes);

    return 0;
}