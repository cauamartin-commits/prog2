#include<stdio.h>

// prototipo
float max_vet(int n, float *vet);

//funcao main
int main(){
    int n;
    
    // leitura di tamanho n
    printf("Digite n: ");
    scanf("%d", &n);

    // criacao do vetor + seus elementos
    float arr[n];

    for (int i = 0; i < n; i++){
        printf("Digite a posicao %d do vetor: ", i + 1);
        scanf("%f", &arr[i]);
    }

    // chamando a funcao max_vet
    float maior = max_vet(n, arr);

    // printando o maior resultado
    printf("Maior: %f\n", maior);

    return 0;
}

float max_vet(int n, float *vet){
    // define maior como o primeiro
    float maior = vet[0];

    for (int i = 1; i < n; i++){
        
        // verifica se existe numeros maiores que o maior e troca se houver
        if (maior < vet[i])
        {
            maior = vet[i];
        }
    }

    return maior;
}