#include <stdio.h>
#include <string.h>

float media(char* mat, char* nome_arquivo){
    FILE *f;
    char m[20];
    float n1, n2, n3;

    f = fopen(nome_arquivo, "r");

    if(f == NULL){
        printf("ERRO\n");
        exit(1);
    }

    while(fscanf(f, "%s %f %f %f", m, &n1, &n2, &n3) == 4){

        if(strcmp(m, mat) == 0){
            fclose(f);
            return (n1 + n2 + n3) / 3;
        }

    }

    fclose(f);

    return -1.0;
}