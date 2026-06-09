#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _ALUNO {
char nome [81];
float nota1 , nota2;
} ALUNO;

void gravar(ALUNO *aluno, int n){
    FILE *fp = fopen("arquivo.txt", "wb");
    int i;
    if(fp==NULL){
        printf("ERRO");
        exit(1);
    }
    for(i=0;i<n;i++){
        fwrite(&aluno[i],sizeof(ALUNO),1,fp);
    }
    fclose(fp);
}

void media(ALUNO *aluno, int n){
    int i;
    printf("\nALUNOS ACIMA DA MEDIA:\n");
    for(i=0;i<n;i++){
        if((aluno[i].nota1 + aluno[i].nota2) / 2 >= 6.0) printf("%s\n", aluno[i].nome);
    }

}

ALUNO* incluir(ALUNO *aluno, int n){
    aluno = realloc(aluno, n * sizeof(ALUNO));
    printf("\nNome do aluno: ");
    scanf(" %80[^\n]", aluno[n-1].nome);
    printf("\nNOTA 1 e NOTA 2: ");
    scanf(" %f %f", &aluno[n-1].nota1, &aluno[n-1].nota2);
    return aluno;
}

void alterar(ALUNO *aluno, int n){
    char nome[81];
    int i,op;
    printf("Nome completo do aluno que deseja alterar os dados: ");
    scanf(" %80[^\n]", nome);
    for(i=0;i<n;i++){
        if(strcmp(nome, aluno[i].nome) == 0){
            printf("Digite 1 para mudar o nome\nDigite 2 para mudar as notas\n");
            scanf(" %d", &op);
            if(op == 1){
                printf("Nome: ");
                scanf(" %80[^\n]", aluno[i].nome);
                return;
            }
            printf("Nota 1: ");
            scanf(" %f", &aluno[i].nota1);
            printf("Nota 2: ");
            scanf(" %f", &aluno[i].nota2);
        }
    }
}

void consulta(ALUNO *aluno, int n){
    int i;
    printf("\n");
    for(i=0;i<n;i++){
        printf("ALUNO: %s\n", aluno[i].nome);
        printf("NOTAS: %.2f %.2f\n\n", aluno[i].nota1, aluno[i].nota2);
    }
}

void excluir(ALUNO *aluno, int n){
    char nome[81];
    int i,j;
    printf("\nNome completo do aluno que deseja excluir os dados: ");
    scanf(" %80[^\n]", nome);
    for(i=0;i<n;i++){
        if(strcmp(nome, aluno[i].nome) == 0){
            for(j=i;j<n-1;j++){
                strcpy(aluno[j].nome, aluno[j+1].nome);
                aluno[j].nota1 = aluno[j+1].nota1;
                aluno[j].nota2 = aluno[j+1].nota2;     
            }
        }
    }
}

int main(void){
    int quant=0, op;
    ALUNO *alunos = NULL;
    do{
        printf("Digite 1 para incluir\nDigite 2 para alterar\nDigite 3 para consultar\nDigite 4 para excluir\nDigite 5 para encerrar\n");
        scanf(" %d", &op);
        switch (op){
        case 1:
            quant++;
            alunos = incluir(alunos, quant);
            break;
        case 2:
            alterar(alunos, quant);
            break;
        case 3:
            consulta(alunos, quant);
            break;
        case 4:
            excluir(alunos, quant);
            quant--;
            break;
        case 5:
            break;
        default:
            printf("Digito invalido\n");
            break;
        }

    }while(op != 5);
    media(alunos, quant);
    gravar(alunos, quant);
    free(alunos);
    return 0;
}