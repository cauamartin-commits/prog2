#include <stdio.h>

int main() {
    char nome[100];
    char endereco[150];
    char telefone[20];
    char resultado[300];

    printf("Nome: ");
    scanf(" %[^\n]", nome);

    printf("Endereco: ");
    scanf(" %[^\n]", endereco);

    printf("Telefone: ");
    scanf(" %[^\n]", telefone);

    sprintf(resultado, "%s - %s - %s", nome, endereco, telefone);

    printf("\nDados:\n%s\n", resultado);

    return 0;
}