#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int igualdade(char*string1, char*string2) {
   int igual=1;
   int i;
   
   if(strlen(string1) != strlen(string2)) {
       igual = 0;
       return igual;
   }
   int tamanho = strlen(string1);
   for(i=0;i<tamanho;i++) {
       if(string1[i] != string2[i]) {
           igual = 0;
           return igual;
       }
   }
   
   return igual;
}

#include <stdio.h>

int SubString(char *s1, char *s2) {
    int i, j;

    for (i = 0; s2[i] != '\0'; i++) {
        j = 0;

        while (s1[j] != '\0' && s2[i + j] == s1[j]) {
            j++;
        }

        if (s1[j] == '\0') {
            return 1;
        }
    }

    return 0;
}
    



int main() {
    char s1[] = "casa", s2[] = "casamento";
    
    int resultado = SubString(s1,s2);
    int resultado2 = igualdade(s1,s2);
    printf("%d\n", resultado);
    
    printf("%d",resultado2);

    return 0;
}