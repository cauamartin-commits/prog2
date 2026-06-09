#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float* leitura(char *arquivo, float* vet, int* num){
    int i=0;
    float numero;
    FILE *fp = fopen(arquivo, "r");
    if(fp == NULL){
    printf("Erro ao abrir o arquivo\n");
    exit(1);
    }
    while(fscanf(fp," %f", &numero) == 1){
        vet = realloc(vet, (i+1) * sizeof(float));
        vet[i] = numero;
        i++;
    }
    *num=i;
    fclose(fp);
    return vet;
}

float media(float *vet, int n){
    int i;
    float media=0;
    for(i=0;i<n;i++){
        media += vet[i];
    }
    return media / n;
}

int main(void){
    char arquivo[50];
    float *vet = NULL;
    int n;
    printf("Nome do arquivo: ");
    scanf(" %49[^\n]", arquivo);
    vet = leitura(arquivo, vet, &n);    
    printf("Media = %.2f", media(vet,n));
    free(vet);
    return 0;
}