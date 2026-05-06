#include<stdio.h>
#include<stdlib.h>

// prototipo com os 7 parametros
int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam);

int main(){
    // lendo n
    int n;
    printf("Digite a quantidade de participantes: ");
    scanf("%d", &n);

    int *inscr = (int*) malloc(n * sizeof(int));

    // verificando memoria
    if (inscr == NULL)
    {
        printf("Memoria insuficiente\n");
        exit(1);
    }

    // criando as inscricoes comecando do 1
    int num = 1;
    for (int i = 0; i < n; i++){
        printf("Inscricao de numero %d", i + 1);
        inscr[i] = num;
        num++;
    }

   // alocando
    float *t1 = (float*) malloc(n * sizeof(float));

    // verificando memoria
    if (t1 == NULL)
    {
        printf("Memoria insuficiente\n");
        exit(1);
    }

    //pedindo ao usuario as notas 1 por inscricao
    for (int i = 0; i < n; i++){
        printf("Digite a primeira nota do aluno de inscricao %d", inscr[i]);
        scanf("%f", &t1[i]);
    }

    // pedindo os pesos da primeira nota
    int p1;
    printf("Digite o peso da primeira nota: ");
    scanf("%d", &p1);

    //pedindo ao usuario as notas 2 por inscricao
    float *t2 = (float*) malloc(n * sizeof(float));

    // verificando memoria
    if (t2 == NULL)
    {
        printf("Memoria insuficiente\n");
        exit(1);
    }

    for (int i = 0; i < n; i++){
        printf("Digite a segunda nota do aluno de inscricao %d", inscr[i]);
        scanf("%f", &t2[i]);
    }

    // pedindo os pesos da segunda nota
    int p2;
    printf("Digite o peso da segunda nota: ");
    scanf("%d", &p2);

    int tam = 0;

    int *lista_premiados = premiados(n, inscr, t1, p1, t2, p2, &tam);

    free(inscr);
    free(t1);
    free(t2);
    free(lista_premiados);

    return 0;
}

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam){
    *tam = 0;

    float maior = 0.0;

    // calculando a media ponderada e descobrindo o maior
    for (int i = 0; i < n; i++){
        float soma = (t1[i] * p1) + (t2[i] * p2);
        float media = soma / (p1 + p2);
        if (media > maior)
        {
            maior = media;
        }
    }

    // descobrindo o tamanho
    for (int i = 0; i < n; i++)
    {
        if (((t1[i] * p1) + (t2[i] * p2)) / (p1 + p2) == maior)
        {
            (*tam)++;
        }
    }

    // alocando
    int *maiores_medias = (int*) malloc((*tam) * sizeof(int));

    // verificando memoria
    if (maiores_medias == NULL)
    {
        printf("Memoria insuficiente.\n");
        exit(1);
    }

    
    int j = 0;
    // loop for
    for (int i = 0; i < n; i++){
        if(((t1[i] * p1) + (t2[i] * p2)) / (p1 + p2) == maior)
        {
            maiores_medias[j] = inscr[i];
            j++;
        }
    }

    return maiores_medias;
}