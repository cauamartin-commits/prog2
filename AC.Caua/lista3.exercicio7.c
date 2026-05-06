#include<stdio.h>

// Afirmativa d e falsa, pois pti[1] = 7
//Seja a seguinte sequência de instruções em um programa C:

int main(){
    int *pti;
    int veti[]={10,7,2,6,3};
    pti = veti;
    printf("Qual afirmativa e falsa?");
    printf("a. *pti é igual a 10");
    printf("b. *(pti+2) é igual a 2");
    printf("c. pti[4] é igual a 3");
    printf("d. pti[1] é igual a 10");
    printf("e. *(veti+3) é igual a 6");

    printf("Resposta: Afirmativa d é falsa, pois pti[1] = 7");
}
