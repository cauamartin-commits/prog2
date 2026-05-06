#include <stdio.h>
#include <string.h>

void remover_newline(char *str) {
    int len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }
}

float diferenca_percentual(int bom, int regular) {
    if (bom == 0 && regular == 0) return 0;
    if (bom == 0) return -100.0; // só teve regular
    float dif = (float)(regular - bom) / bom * 100.0;
    return dif;
}

float media_idade(int soma_idades, int qtd) {
    if (qtd == 0) return 0;
    return (float)soma_idades / qtd;
}

float percentual_respostas(int qtd_resposta, int total) {
    if (total == 0) return 0;
    return (float)qtd_resposta / total * 100.0;
}

int diferenca_absoluta(int a, int b) {
    int dif = a - b;
    return dif < 0? -dif : dif;
}

int main() {
    int i, idade;
    int resp_otimo = 0, resp_boa = 0, resp_regular = 0, resp_pessimo = 0, resp_ruim = 0;
    int soma_idade_pessimo = 0, soma_idade_ruim = 0;
    int maior_otimo = 0, maior_ruim = 0, maior_pessimo = 0;
    char avaliacao[20];

    for (i = 0; i < 100; i++) {
        printf("Qual sua idade: ");
        scanf("%d", &idade);

        printf("Qual sua avaliacao [otimo/boa/regular/ruim/pessimo]: ");
        getchar();
        fgets(avaliacao, 20, stdin);
        remover_newline(avaliacao);

        if (strcmp(avaliacao, "otimo") == 0) {
            resp_otimo++;
            if (idade > maior_otimo) maior_otimo = idade;
        }
        else if (strcmp(avaliacao, "boa") == 0) {
            resp_boa++;
        }
        else if (strcmp(avaliacao, "regular") == 0) {
            resp_regular++;
        }
        else if (strcmp(avaliacao, "ruim") == 0) {
            resp_ruim++;
            soma_idade_ruim += idade;
            if (idade > maior_ruim) maior_ruim = idade;
        }
        else if (strcmp(avaliacao, "pessimo") == 0) {
            resp_pessimo++;
            soma_idade_pessimo += idade;
            if (idade > maior_pessimo) maior_pessimo = idade;
        }
        else {
            printf("Avaliacao invalida. Nao contabilizada.\n");
            i--; 
        }
    }

    printf("\n--- RESULTADOS ---\n");
    printf("Quantidade de respostas otimo: %d\n", resp_otimo);
    printf("Diferenca percentual entre respostas regular e boa: %.2f%%\n", diferenca_percentual(resp_boa, resp_regular));
    printf("Media de idade das pessoas que responderam ruim: %.2f\n", media_idade(soma_idade_ruim, resp_ruim));
    printf("Porcentagem de respostas pessimo: %.2f%% | Maior idade que usou esta opcao: %d\n",
           percentual_respostas(resp_pessimo, 100), maior_pessimo);
    printf("Diferenca de idade entre maior idade que respondeu otimo e maior que respondeu ruim: %d\n",
           diferenca_absoluta(maior_otimo, maior_ruim));

    return 0;
}