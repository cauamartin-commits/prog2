#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    int matricula;
    char nome[100];
    float nota;
} Aluno;

typedef struct no{
    Aluno aluno;
    struct no *proximo;
}No;

No* incluir(No *lista){
    FILE *fp = fopen("arquivo.txt", "r");
    if(fp == NULL){
        printf("Erro ao abrir arquivo\n");
        return lista;
    }
    Aluno aluno;
    while(fscanf(fp, "%d", &aluno.matricula) == 1 && fscanf(fp, " %99[^\n]", aluno.nome) == 1 && fscanf(fp, "%f", &aluno.nota) == 1){

        No *novo = (No*) malloc(sizeof(No));
        if(novo == NULL){
            printf("ERRO\n");
            exit(1);
        }
        novo->aluno = aluno;
        novo->proximo = NULL;
        if(lista == NULL){
            lista = novo;
        }
        else{
            No *aux = lista;
            while(aux->proximo != NULL) aux = aux->proximo;
            aux->proximo = novo;
        }
    }
    fclose(fp);
    return lista;
}

No* excluir(No* lista, int matricula){
    No *aux, *aux2;
    if(lista == NULL) return NULL;
    aux = lista;
    if(aux->aluno.matricula == matricula){
        lista = aux->proximo;
        free(aux);
        return lista;
    }
    while(aux->proximo != NULL){
        if(aux->proximo->aluno.matricula == matricula){
            aux2 = aux->proximo;
            aux->proximo = aux2->proximo;
            free(aux2);
            return lista;
        }
        aux = aux->proximo;
    }
    return lista;
}

void alterar(No* lista, int matricula){
    No *aux;
    int op;
    char nome[100];
    aux = lista;
    while(aux != NULL && aux->aluno.matricula != matricula){
        aux = aux->proximo;
    }
    if(aux == NULL){
        printf("Aluno nao encontrado\n");
        return;
    }
    printf("Digite 1 para alterar o nome\nDigite 2 para alterar a nota: ");
    scanf(" %d", &op);
    if(op == 1){
        printf("Digite o novo nome: ");
        scanf(" %99[^\n]", nome);
        strcpy(aux->aluno.nome, nome);
        return;
    }
    if(op == 2){
        printf("Digite a nova nota: ");
        scanf(" %f", &aux->aluno.nota);
        return;
    }
    else printf("Digito invalido");
}

void imprimir(No* lista){
    No* aux;
    aux = lista;
    while(aux != NULL){
        printf("Matricula: %d\n%s %.2f\n\n", aux->aluno.matricula, aux->aluno.nome, aux->aluno.nota);
        aux = aux->proximo;
    }
}

void liberar_lista(No *lista){
    No *aux;

    while(lista != NULL){
        aux = lista;
        lista = lista->proximo;
        free(aux);
    }
}

int main(void){
    No *lista = NULL;
    int op, mat;
    lista = incluir(lista);
    imprimir(lista);
    do{
        printf("\n\n\nDigite 1 para excluir\nDigite 2 para alterar\nDigite 3 para sair\n\n");
        scanf(" %d", &op);
        switch (op)
        {
        case 1:
            printf("\nMatricula do aluno que deseja excluir: ");
            scanf(" %d", &mat);
            lista = excluir(lista,mat);
            imprimir(lista);
            break;
        case 2:
            printf("\nMatricula do aluno que deseja alterar as informacoes: ");
            scanf(" %d", &mat);
            alterar(lista,mat);
            imprimir(lista);
            break;
        case 3:
            break;
        default:
            printf("\nDigito invalido\n");
        }
    }while(op != 3); 
    liberar_lista(lista);
    return 0;
}