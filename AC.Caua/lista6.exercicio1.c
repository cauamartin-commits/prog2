#include<stdio.h>
#include<stdlib.h>

// prototipo
float *acima_da_media(int n, float *vet, int *tam);

// principal
int main(){
    // lendo tamanho
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // alocando dinamicamente
    float *vet = (float*) malloc(n * sizeof(float));
    for (int i = 0; i < n; i++){
        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%f", &vet[i]);
    }

    int tam = 0;
    float *vetresposta = acima_da_media(n, vet, &tam);

    for (int i = 0; i < tam; i++){
        printf("%.1f ", vetresposta[i]);
    }

    free(vet);
    free(vetresposta);

    return 0;
}

float *acima_da_media(int n, float *vet, int *tam){

    // calcular a media
    float soma = 0;
    for (int i = 0; i < n; i++){
        soma += vet[i];
    }

    float media = soma / n;

    // contar maiores
    *tam = 0;
    for (int i = 0; i < n; i++){
        if (vet[i] > media){
            (*tam)++;
        }
    }
    
    // alocar memória
    float *vetresposta = (float*) malloc((*tam) * sizeof(float));

    if (vetresposta == NULL){
        return NULL;
    }

    // preencher vetor
    int j = 0;
    for (int i = 0; i < n; i++){
        if (vet[i] > media){
            vetresposta[j] = vet[i];
            j++;
        }
    }
             

    return vetresposta;
}