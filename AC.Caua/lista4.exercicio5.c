#include<stdio.h>
#include<stdlib.h>

// define a bandeirada
#define BANDEIRADA 4.95

// prototipo
void calcula_corrida(float dist, float *b1, float *b2);

// funcao principal
int main(){
    // conhece a distancia
    float dist;
    printf("Digite a distancia percorrida: ");
    scanf("%f", &dist);

    // declara b1 e b2, como lixo
    float b1;
    float b2;
    
    // chama a funcao calcula
    calcula_corrida(dist, &b1, &b2);

    // imprime os valores
    printf("A bandeira 1: %.2f\n", b1);
    printf("A bandeira 2: %.2f", b2);

    return 0;
}

void calcula_corrida(float dist, float *b1, float *b2){
    // calcula bandeira 1 e bandeira 2
    *b1 = BANDEIRADA + (2.50 * dist);
    *b2 = BANDEIRADA + (3.00 * dist);
}