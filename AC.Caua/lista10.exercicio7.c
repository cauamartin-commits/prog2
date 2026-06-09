#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparar_float(const void *a, const void *b){
    float x = *(const float*)a;
    float y = *(const float*)b;
    if(x > y) return 1;
    if(x < y) return -1;
    return 0;
}

float* ler(float* vet, int *num){
    int i=0;
    float numero;
    FILE *fp = fopen("numeros.txt","r");
    if(fp==NULL){
        printf("ERRO");
        exit(1);
    }
    while(fscanf(fp,"%f",&numero) == 1){
        vet = realloc(vet, (i+1) * sizeof(float));
        vet[i] = numero;
        i++;
    }
    *num = i;
    fclose(fp);
    return vet;
}

void salvar(float *vet, int n){
    int i;
    FILE *fp = fopen("numeros.bin","wb");
    if(fp==NULL){
        printf("ERRO");
        exit(1);
    }
    for(i=0;i<n;i++){
        fwrite(&vet[i],sizeof(float),1,fp);
    }
    fclose(fp);
}

int main(void){
    float *vet = NULL;
    int n;
    vet = ler(vet,&n);
    qsort(vet,n,sizeof(float),comparar_float);
    salvar(vet, n);
    free(vet);
    return 0;
}