#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {
char nome[81]; /* nome do funcionário */
float valor_hora; /* valor da hora de trabalho em Reais */
int horas_mes; /* horas trabalhadas em um mês */
};
typedef struct funcionario Funcionario;


void carrega (int n, Funcionario** vet, char* arquivo){
    FILE *fp = fopen("arq", "w");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
    int i;
    for(i=0;i<n;i++){
        fgets(vet[i]->nome, 81, fp);
        vet[i]->nome[strcspn(vet[i]->nome, "\n")] = '\0';
        fscanf(fp," %f %d", &vet[i]->valor_hora, &vet[i]->horas_mes);
    }
}