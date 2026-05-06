#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *compactar(char *s) {
    int i;
    int stringLength = strlen(s);
    int caracteresInvalidos = 0;
    
    if(stringLength == 0) {
        return NULL;
    }
    for(i=0;i<stringLength;i++) {
        if(isspace(s[i]) && (isspace(s[i+1])|| s[i+1] == '\0' || i==0 || isspace(s[i-1])) ) {
            caracteresInvalidos++;
        }
    }
    int caracteresValidos = strlen(s) - caracteresInvalidos;
    
    char *novaString = malloc(caracteresValidos * sizeof(char));
    
    int k=0;
    
    for(i=0;i<stringLength;i++) {
        if(isspace(s[i]) && (isspace(s[i+1])|| s[i+1] == '\0' || i==0 || isspace(s[i-1])) ) {
            continue;
        }
        else {
            novaString[k++] = s[i];
        }
    }
    
    return novaString;
}

int main() {
    char minhaString[] = "   Vasco   ";
    
    char *minhaStringCompactada = compactar(minhaString);
    
    printf("%s", minhaStringCompactada);

    return 0;
}