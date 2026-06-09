#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float busca(char* arquivo, char* matricula) {
    FILE *f;
    char mat[20];
    float cr;

    f = fopen(arquivo, "r");

    if (f == NULL) {
        printf("ERRO\n");
        exit(1);
    }

    while (fscanf(f, "%s %f", mat, &cr) == 2) {

        if (strcmp(mat, matricula) == 0) {
            fclose(f);
            return cr;
        }

    }

    fclose(f);

    return -1.0;
}