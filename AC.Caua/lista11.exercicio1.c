#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct elemento {
float info; /* Valor real armazenado */
struct elemento *prox; /* Ponteiro para o próximo elemento */
};
typedef struct elemento Elemento;

Elemento* filtra(Elemento *lst, float min, float max){
    Elemento *aux , *aux2;
    if((lst) == NULL){
        return lst;
    }
    aux = lst;
    while(aux != NULL && (aux->info < min || aux->info > max)){
        lst = aux->prox;
        free(aux);
        aux = lst;
    }
    if(aux == NULL) return NULL;
    while(aux->prox != NULL){
        if(aux->prox->info < min || aux->prox->info > max){
            aux2 = aux->prox;
            aux->prox = aux2->prox;
            free(aux2); 
        }
        else aux = aux->prox;
    }
    return lst;
}