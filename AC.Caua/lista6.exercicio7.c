#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void repeticao(int *vet, int tam);

int main(){
    // pedindo tamamnho ao usuario
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    // alocando memoria do vetor e conferindo se existe memoria
    int *vet = (int*) malloc(tam * sizeof(int));

    if (vet == NULL) {
        printf("Memoria insuficiente\n");
        exit(1);
    }

    // criando vetor com numeros de 0 a 9
    srand(time(NULL));

    for (int i = 0; i < tam; i++) {
        vet[i] = rand() % 10;
    }

    repeticao(vet, tam);

    return 0;
}

void repeticao(int *vet, int tam)
{
    int primeiro = 1;
    for (int i = 0; i < tam - 1; i++)
    {
        int repete = 0;
        int apareceu = 0;

          
        for (int j = i + 1; j < tam; j++)
        {  
            if(vet[i] == vet[j])
            {
                repete = 1;
            }
        }

        for (int k = 0; k < i; k++)
        {
            if (vet[i] == vet[k])
            {
                apareceu = 1;
            }
        }

        // verifica e imprime como desejado
        if(repete && apareceu == 0)
        {
            if(!primeiro)
            {
                printf(", ");
            }
            
            printf("%d", vet[i]);
            primeiro = 0;
        }
        
    }
}