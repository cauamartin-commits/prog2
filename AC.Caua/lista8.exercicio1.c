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
     int somaFixa;
    for (i = 0; i < linha; i++) {
        int parcial=0;
        for (j = 0; j < coluna; j++) {
            scanf("%d", &matriz[i][j]); 
            parcial += matriz[i][j];
        }
        if(i==0) somaFixa = parcial;
        
        if(somaFixa != parcial) {
            printf("SOMA DIFERENTE");
            return 0;
        }
    }
    
    printf("SOMA IGUAL");


    return 0;
}