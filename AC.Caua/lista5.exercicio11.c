#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverterString(char *string) {
    int i=0,j=strlen(string)-1;
    char temp;
    while(i<j) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        i++;
        j--;
    }
}


int main() {
    char s1[] = "Vasco";
    inverterString(s1);
    printf("%s", s1);

    return 0;
}