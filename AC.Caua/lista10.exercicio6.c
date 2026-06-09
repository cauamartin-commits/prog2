#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criar_arquivos(void){
    FILE *fp;
    char arquivo[20];
    int i;
    for(i=1;i<10;i++){
        sprintf(arquivo, "teste%02d.txt", i);
        fp = fopen(arquivo, "w");
        if(fp == NULL){
            printf("ERRO");
            exit(1);
        }
        fprintf(fp,"Texto do arquivo %d", i);
        fclose(fp);
    }
}

int main(void){
    criar_arquivos();
    return 0;
}