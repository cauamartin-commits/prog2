#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *stringAbreviada(char *string) {
    int i,j=0, contadorMaiusculo=0, tamanho = strlen(string);
    for(i=0;i<tamanho;i++) {
        if(isupper(string[i])) {
            contadorMaiusculo++;
        }
    }
    
    char *stringAbreviada = malloc((2*contadorMaiusculo+1)*sizeof(char));
    if(stringAbreviada == NULL) {
        printf("Falha na alocacao de memoria");
        exit(1);
    }
    for(i=0;i<tamanho;i++) {

        if(isupper(string[i])) {
            stringAbreviada[j++] = string[i];
            stringAbreviada[j++] = '.';
        }
    }
    stringAbreviada[j] = '\0';
    return stringAbreviada;
}

int main() {
    char s1[] = "Paulo Jose de Almeida Prado";
    
    printf("%s",stringAbreviada(s1));

    return 0;
}