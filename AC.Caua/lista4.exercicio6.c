#include <stdio.h>
#include <ctype.h>
#include <string.h>

int valida_mail(char *s) {
    int len = strlen(s);
    
    if(len == 0 || len > 64) return 0;
    
    if(!isalpha(s[0])) return 0;
    
    int letras_digitos = 0;
    
    for(int i = 0; i < len; i++) {
        
        if(isalnum(s[i])) {
            letras_digitos++;
        }
        
        else if(s[i] != '.' && s[i] != '-' && s[i] != '_') {
            return 0;
        }
        

        if(i < len - 1 && s[i] == '.' && s[i+1] == '.') {
            return 0;
        }
    }
    
    if(s[len-1] == '.') return 0;
    

    if(letras_digitos < 2) return 0;
    
    return 1;
}