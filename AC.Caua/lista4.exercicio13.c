#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clean(char* s){
    int i;
    for(i=0;i<20;i++){
        if(s[i] == '\n'){
            s[i] = s[i+1];
        }
    }
}

void estatistica(char* s){
    int i=0, j, cont=0;
    char letra;
    while(s[0]!='\0'){
        letra=s[0];
        while(s[i] != '\0'){
            if(s[i] == letra){
                cont++;
                j=i;
                while(s[j-1] != '\0'){
                    s[j] = s[j+1];
                    j++;
                    }
                    i--;
                }
            i++;
            }
        i=0;
        j=0;
        printf("'%c': %d ",letra, cont);
        cont=0;
    }
}

int main(){
    char vet[50];
    printf("digite uma palavra ou frase: ");
    fgets(vet,50,stdin);
    clean(vet);
    estatistica(vet);
    return 0;
}