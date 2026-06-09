#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remover_comentario(char *arquivo1, char *arquivo2){
    FILE *fp1,*fp2;
    fp1 = fopen(arquivo1,"r");
    fp2 = fopen(arquivo2,"w");
    char linha[100];
    if(fp1 == NULL){
        printf("ERRO");
        exit(1);
    }
    if(fp2 == NULL){
        printf("ERRO");
        exit(1);
    }
    while(fgets(linha,100,fp1) != NULL){
        if(strstr(linha, "//") == NULL){
            fputs(linha,fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
}

int main(void){
    char arq1[] = "arquivo.c";
    char arq2[] = "arquivo.txt";
    remover_comentario(arq1,arq2);
    return 0;
}