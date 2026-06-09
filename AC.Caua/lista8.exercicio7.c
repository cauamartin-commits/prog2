#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void imprimir_vetor(int* vet, int k){
    int i;
    for(i=0;i<k;i++){
        printf("%d ", vet[i]);
    }
}

int distancia(int matriz[5][5]){
    int i=-1,j=-1,dist,soma=0;
    while(1){
        
        do{
            printf("voce quer ir de qual cidade ate qual?\n");
            scanf(" %d %d", &i,&j);
        }while(i<0 || j<0);
        if(i == 0 && j == 0){
            break;
        }
        i--;
        j--;
        dist = matriz[i][j];
        soma += dist;
        printf("distancia = %d\n", dist);
        dist = 0;
    }
    return soma;
}

int tira_repeticao(int matriz[5][5], int rep[11]){
    int i,j,k=1,m, repetido = 0;
    rep[0] = 0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            repetido = 0;
            for(m=0;m<k;m++){
                if(rep[m] == matriz[i][j]){
                    repetido = 1;
                    break;
                }
            }
            if(!repetido){
            rep[k] = matriz[i][j];
            k++;
            }
        }
    }
    return k;
}

int main(void){
    int matriz[5][5] = {{0, 15, 30, 5, 12},
                    {15, 0, 10, 17, 28},
                    {30, 10, 0, 3, 11},
                    {5, 17, 3, 0, 80},
                    {12, 28, 11, 80, 0},
                    };
    int no_rep[11];
    int n, soma = distancia(matriz);
    printf("distancia total = %d\n", soma);
    n = tira_repeticao(matriz, no_rep);
    imprimir_vetor(no_rep, n);
    return 0;
}