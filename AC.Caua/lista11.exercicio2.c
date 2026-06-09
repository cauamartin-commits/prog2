#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct elemento {
int info; /* Valor inteiro armazenado */
struct elemento *prox; /* Ponteiro para o próximo elemento */
};
typedef struct elemento Elemento;

Elemento* copia(Elemento* lst){
    Elemento *lista_copia, *elem, *aux1;
    if(lst == NULL) return NULL;
    lista_copia =(Elemento*) malloc(sizeof(Elemento));
    if(lista_copia == NULL){
        printf("ERRO");
        exit(1);
    }
    lista_copia->info = lst->info;
    lst = lst->prox;
    lista_copia->prox = NULL;
    aux1 = lista_copia;
    while(lst != NULL){
        elem = (Elemento*) malloc(sizeof(Elemento));
        if(elem == NULL){
            printf("ERRO");
            exit(1);
        }
        aux1->prox = elem;
        aux1 = aux1->prox;
        aux1->info = lst->info;
        lst = lst->prox;
        aux1->prox = NULL;
        
    }
    return lista_copia;
}