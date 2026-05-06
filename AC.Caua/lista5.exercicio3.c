#include<stdio.h>
#include<stdlib.h>

// prototipo
int repete(char *s, char n);

int main (){
    // ler n
    char n;
    printf("Digite um caracter para ser buscado: ");
    scanf(" %c", &n);

    // criar vetor com 20 caracteres
    char s[20];
    printf("Digite uma cadeia de caracteres:\n");
    scanf("%s", s); // ou scanf(" %[^\n]", s);

    int n_repete = repete(s, n);
    printf("%d", n_repete);

    return 0;
}

int repete(char *s, char n){
    // inicializa i e soma = 0
    int i = 0;
    int soma = 0;

    // enquanto o valor for diferente de \0, some + 1 a soma se s[i] for igual ao valor buscado
    while(s[i] != '\0')
    {
        if(s[i] == n)
        {
            soma++;
        }
        i++;
    }

 
    return soma;
}
