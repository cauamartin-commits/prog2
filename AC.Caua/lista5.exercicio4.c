#include<stdio.h>
#include<stdlib.h>

int main(){
    // cria palvra com limite de 50 caracteres
    char v[50];
    // pede ao usuario
    printf("Digite a palavra desejada: ");
    scanf("%s", v);

    // variavel de soma
    int soma = 0;

    // loop que conta os caracteres
    for (int i = 0; v[i] != '\0'; i++)
    {
        soma++;
    }

    int ultima = soma - 1;

    // imprime a primeira, a ultima e a quantidade de letras
    printf("Primeira letra da palavra = '%c'\n", v[0]);
    printf("Ultima letra da palavra = '%c'\n", v[ultima]);
    printf("A palavra tem %d letras\n", soma);

    return 0;
}