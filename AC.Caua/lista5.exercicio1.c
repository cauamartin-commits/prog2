#include <stdio.h>
#include <stdlib.h>

// prototipo vogais
void vogais(char *v, int *resp);

// funcao principal
int main(){
    // variavel char
    char v[50];
    int total;// variavel int total

    scanf("%s", v);// pede a string ao usuario

    vogais(v, &total);// chama a funcao vogais

    printf("Numero de vogais: %d\n", total);// imprime  numero de vogais

    return 0;
}

void vogais(char *v, int *resp){
    int i = 0;
    *resp = 0;

    // quando o valor for diferente de \0, o programa verificara se e vogal
    while(v[i] != '\0'){
        if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u'||
           v[i]=='A'||v[i]=='E'||v[i]=='I'||v[i]=='O'||v[i]=='U'){
            (*resp)++;
        }
        i++;
    }

}