#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clean(char*s){
    int i;
    for(i=0;i<20;i++){
        if(s[i] == '\n'){
            s[i] = s[i+1];
        }
    }
}
void remover_letra(char* vet, char letra){
    int i=0,j;
    while(vet[i] != '\0'){
        if(vet[i] == letra){
            j=i;
            while(vet[j-1] != '\0'){
                vet[j] = vet[j+1];
                j++;
            }
            i--;
        }
        i++;
    }
}

int main(){
    char vet[21], letra;
    printf("digite a palavra: ");
    fgets(vet,21,stdin);
    clean(vet);
    printf("digite a letra que quer tirar: ");
    scanf(" %c", &letra);
    remover_letra(vet, letra);
    printf("%s", vet);
    return 0;
}