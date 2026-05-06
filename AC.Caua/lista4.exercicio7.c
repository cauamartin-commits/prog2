#include <stdio.h>
#include <ctype.h>
#include <string.h>

void CamelCase(char *s) {
    int i = 0, j = 0;
    int nova_palavra = 1;
    
    while(s[i] != '\0') {
        if(s[i] == ' ') {
            nova_palavra = 1;
        } else {
            if(nova_palavra) {
                s[j++] = toupper(s[i]);
                nova_palavra = 0;
            } else {
                s[j++] = s[i];
            }
        }
        i++;
    }
    
    s[j] = '\0';
}