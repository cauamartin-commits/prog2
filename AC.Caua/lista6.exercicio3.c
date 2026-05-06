#include<stdio.h>
#include<stdlib.h>

// prototipo
int *aprovados(int n, int *mat, float *notas, int *tam);

int main(){
    // lendo o tamanho n
    int n;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    // alocando o ponteiro mat
    int *mat = (int*) malloc(n * sizeof(int));

    // criando numeros para a matricula a partir de mil
    int num = 1000;
    for (int i = 0; i < n; i++)
    {
        printf("Criando a matricula da posicao %d ", i + 1);
        printf("%d", num);
        mat[i] = num;
        num++;
    }

    // alocando o ponteiro float
    float *notas = (float*) malloc(n * sizeof(float));

    // pedindo ao usuario para preenchar o vetor ponteiro
    for (int i = 0; i < n; i++)
    {
        printf("Digite a nota do aluno %d", mat[i]);
        scanf("%f", &notas[i]);
    }

    // inicializa tamanho com 0
    int tam = 0;

    // chama a funcao dos aprovados
    int *matricula_aprovados = aprovados(n, mat, notas, &tam);

    // imprime matricula dos aprovados
    for (int i = 0; i < tam; i++){
        printf("%d", matricula_aprovados[i]);
    }

    // limpa memoria dos ponteiros
    free(mat);
    free(notas);
    free(matricula_aprovados);

    return 0;
}

int *aprovados(int n, int *mat, float *notas, int *tam){

    *tam = 0;
    
    // verifica quantidade de aprovados
    for (int i = 0; i < n; i++){
        if (notas[i] >= 5.0){
            (*tam)++;
        }
    }

    // aloca ponteiro dos aprovados
    int *aprovados = (int*) malloc((*tam) * sizeof(int));

    // verifica memoria
    if (aprovados == NULL)
    {
        printf("Memoria insuficiente\n");
        exit(1);
    }

    // preenche vetor ponteiro dos aprovados com a matricula referente
    int j = 0;
    for (int i = 0; i < n; i++){
        if (notas[i] >= 5.0)
        {
            aprovados[j] = mat[i];
            j++;
        }
    }

    return aprovados;
}