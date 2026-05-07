#include <stdio.h>
#include <conio.h>
#define TAM 80


int main(){
    char palavra[TAM] = "";
    int i=0;
    while(1){
        palavra[i] = getch();
        if (palavra[i] == '\r'){
            palavra[i] == '\0';
            break;
        }
        printf("%c\n", palavra[i]);
        if (i == TAM - 1){
            palavra[i+1] = '\0';
            break;
        }
        i++;
    }

    return 0;
}