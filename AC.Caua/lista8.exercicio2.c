#include <stdio.h>
#include <stdlib.h>
int main() {
    int linha, coluna;
    
    scanf("%d", &linha);
    scanf("%d", &coluna);
    
    int **matriz = (int**) malloc(linha * sizeof(int*));
    
    int i, j;
    
    for(i=0; i<linha; i++) {
        matriz[i] =(int*) malloc(coluna * sizeof(int*));
    }
    
    for(i=0; i<linha;i++) {
        for(j=0;j<coluna;j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    
    int linha2, coluna2;
    
    scanf("%d", &linha2);
    scanf("%d", &coluna2);
    
    int **matriz2 = (int**) malloc(linha2 * sizeof(int*));
    
    for(i=0; i<linha2; i++) {
        matriz2[i] =(int*) malloc(coluna2 * sizeof(int*));
    }
    
    for(i=0; i<linha2;i++) {
        for(j=0;j<coluna2;j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    
    for(i=0; i<linha;i++) {
        for(j=0;j<coluna;j++) {
            printf("%d ", matriz[i][j]+matriz2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}