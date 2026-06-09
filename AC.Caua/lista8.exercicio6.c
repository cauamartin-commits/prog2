#include <stdio.h>

int main() {
    int tabuleiro[8][8] = {
        {1, 3, 0, 5, 4, 0, 2, 1},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 6, 0},
        {1, 0, 0, 1, 1, 0, 0, 1},
        {0, 1, 0, 4, 0, 0, 1, 0},
        {0, 0, 3, 1, 0, 0, 1, 1},
        {1, 0, 6, 6, 0, 0, 1, 0},
        {1, 0, 5, 0, 1, 1, 0, 6}
    };

    int contador[7] = {0}; 

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int peca = tabuleiro[i][j];
            if (peca >= 0 && peca <= 6) {
                contador[peca]++;
            }
        }
    }

    printf("=== RESULTADO ITEM B (Contagem de Pecas) ===\n");
    printf("1 - Peoes:   %d\n", contador[1]);
    printf("2 - Cavalos: %d\n", contador[2]);
    printf("3 - Torres:  %d\n", contador[3]);
    printf("4 - Bispos:  %d\n", contador[4]);
    printf("5 - Reis:    %d\n", contador[5]);
    printf("6 - Rainhas: %d\n", contador[6]);
    printf("0 - Vazios:  %d\n", contador[0]);

    return 0;
}