#include <stdio.h>

int main() {
    int distancias[5][5] = {
        {0, 15, 30, 5, 12},
        {15, 0, 10, 17, 28},
        {30, 10, 0, 3, 11},
        {5, 17, 3, 0, 80},
        {12, 28, 11, 80, 0}
    };

    printf("=== A) CONSULTA DE DISTANCIA ===\n");
    int origem, destino;
    while (1) {
        printf("Digite a origem e destino (1 a 5) separados por espaco (ou '0 0' para sair): ");
        scanf("%d %d", &origem, &destino);
        
        if (origem == 0 && destino == 0) {
            break; 
        }
        
        if (origem >= 1 && origem <= 5 && destino >= 1 && destino <= 5) {
            // Subtrai 1 para acessar os índices corretos da matriz (0 a 4)
            printf("Distancia de %d para %d: %d km\n\n", origem, destino, distancias[origem-1][destino-1]);
        } else {
            printf("Cidades invalidas! Digite numeros de 1 a 5.\n\n");
        }
    }

    printf("\n=== B) TABELA SEM REPETICOES ===\n");
    // Para não repetir pares (ex: 1->3 e 3->1) nem zeros (1->1),
    // navegamos apenas na "metade superior" (triângulo superior) da matriz.
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            printf("Distancia entre as cidades %d e %d: %d km\n", i + 1, j + 1, distancias[i][j]);
        }
    }

    printf("\n=== C) TOTAL PERCORRIDO ===\n");
    // Percurso do exemplo: 1, 2, 3, 2, 5, 1, 4
    int percurso[] = {1, 2, 3, 2, 5, 1, 4};
    int num_paradas = sizeof(percurso) / sizeof(percurso[0]); // Descobre o tamanho do vetor
    int total = 0;

    printf("Exemplo: dado o percurso 1, 2, 3, 2, 5, 1, 4, teremos:\n");
    
    for (int i = 0; i < num_paradas - 1; i++) {
        int cid1 = percurso[i] - 1;
        int cid2 = percurso[i+1] - 1;
        
        int dist_trecho = distancias[cid1][cid2];
        total += dist_trecho;
        
        printf("%d ", dist_trecho);
        if (i < num_paradas - 2) {
            printf("+ ");
        }
    }
    printf("= %d km\n", total);

    return 0;
}