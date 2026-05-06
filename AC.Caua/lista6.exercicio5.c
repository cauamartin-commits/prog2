#include <stdlib.h>
#include <string.h>

char* cifra_cesar(char* msg) {
    int i;
    int n = strlen(msg);
    char *nova = (char *) malloc((n + 1) * sizeof(char));

    for (i = 0; i < n; i++) {
        char c = msg[i];

        if (c >= 'a' && c <= 'z') {
            nova[i] = ((c - 'a' + 3) % 26) + 'a';
        }
        else if (c >= 'A' && c <= 'Z') {
            nova[i] = ((c - 'A' + 3) % 26) + 'A';
        }
        else {
            nova[i] = c;
        }
    }

    nova[n] = '\0';

    return nova;
}