#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// prototipo
int *repeticao(int *vet, int tam, int *n);

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

    // cria n = 0
    int n = 0;

    // chama a funcao dos repetidos e coloca num ponteiro
    int *repetidos = repeticao(vet, tam, &n);

    // imprime com ','
    for (int i = 0; i < n; i++)
    {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", repetidos[i]);
    }       

    return 0;
}

int *repeticao(int *vet, int tam, int *n)
{
    // aloca rep e verifica memoria
    int *rep = (int*) malloc(tam * sizeof(int));
    if (rep == NULL) {
        printf("Memoria insuficiente\n");
        exit(1);
    }

    // poe n = 0 para nao dar erro, puxar memoria lixo
    *n = 0;

    // loop para verificar
    for (int i = 0; i < tam - 1; i++)
    {
        // variaveis booleanas
        int apareceu = 0;
        int repetiu = 0;

        // verifica se repete
        for(int j = i + 1; j < tam; j++)
        {
            if(vet[i] == vet[j])
            {
                repetiu = 1;
            }
        }

        // verifica se apareceu
        for (int k = 0; k < i; k++)
        {
            if (vet[i] == vet[k])
            {
                apareceu = 1;
            }
        }

        // preenche o vetor e add +1 no ponteiro n
        if (repetiu == 1 && apareceu == 0)
        {
            rep[*n] = vet[i];  
            (*n)++;             
        }
    }

    return rep;
}