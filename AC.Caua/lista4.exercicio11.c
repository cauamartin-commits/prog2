#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void preencher_vetor(int* vet){
    int i;
    for(i=0;i<20;i++){
        vet[i] = 1 + rand() % 10;
    }
}
void imprimir_vetor(int* vet){
    int i = 0;
    for(i=0;i<20;i++){
        printf("%d ", vet[i]);
    }
    printf("\n");

}

void operacao_aritmetica(int* vet1, int* vet2, char* vet3,int* vet4){
    int i,j,k,l;
    for(i=0;i<20;i++){
        puts("vetor1");
        imprimir_vetor(vet1);
        puts("vetor2");
        imprimir_vetor(vet2);
        printf("elemento %d do vetor 3\n", i+1);
        do{
        printf("qual operacao voce deseja fazer\nadicao, subtracao,multiplicacao ou divisao?\n");
        scanf(" %s", vet3);
        }while(strcmp(vet3, "adicao")!=0 && strcmp(vet3, "subtracao") !=0 && strcmp(vet3, "multiplicacao") !=0 && strcmp(vet3, "divisao") !=0);
        printf("diga a posicao do elemento no vetor 1 que voce quer fazer a operacao: ");
        scanf(" %d", &l);
        printf("diga a posicao do elemento no vetor 2 que voce quer fazer a operacao: ");
        scanf(" %d", &k);
        if (k < 0 || k >= 20 || l < 0 || l >= 20) {
            printf("Posicao invalida");
            i--;
            continue;
        }
        if(strcmp(vet3, "adicao") == 0){
            vet4[i] = vet1[k-1] + vet2[l-1];
        }
        else if(strcmp(vet3, "subtracao") == 0){
            vet4[i] = vet1[k-1] - vet2[l-1];
        }
        else if(strcmp(vet3, "multiplicacao") == 0){
            vet4[i] = vet1[k-1] * vet2[l-1];
        }
        else if(strcmp(vet3, "multiplicacao") == 0){
            vet4[i] = vet1[k-1] / vet2[l-1];
        }

    }
}

int main(){
    int vet1[20],vet2[20],vet4[20], i;
    char vet3[20];
    srand(time(NULL));
    preencher_vetor(vet1);
    preencher_vetor(vet2);

    puts("a operacao aritmetica é feita vet1 operador vet2");
    operacao_aritmetica(vet1, vet2, vet3, vet4);
    puts("vetor 3");
    for(i=0;i<20;i++){
        printf("%d ", vet4[i]);
    }
    return 0;
}