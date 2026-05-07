#include <stdio.h>
#include <string.h>
#include <conio.h>

int caractereValido(char c) {
    return (c >= '0' && c <= '9') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= 'a' && c <= 'z');
}

void lerUsuario(char vet[]) {
    int i = 0;
    char c;

    while (i < 8) {
        c = getch();

        // ENTER
        if (c == 13) {
            break;
        }

        // BACKSPACE
        if (c == 8 && i > 0) {
            i--;
            printf("\b \b");
        }
        else if (caractereValido(c)) {
            vet[i] = c;
            i++;
            printf("%c", c);
        }
    }

    vet[i] = '\0';
}

void lerSenha(char vet[]) {
    int i = 0;
    char c;

    while (i < 8) {
        c = getch();

        // ENTER
        if (c == 13) {
            break;
        }

        // BACKSPACE
        if (c == 8 && i > 0) {
            i--;
            printf("\b \b");
        }
        else if (caractereValido(c)) {
            vet[i] = c;
            i++;
            printf("*");
        }
    }

    vet[i] = '\0';
}

int main() {
    char usuario[9];
    char senha[9];

    char usuarioLogin[9];
    char senhaLogin[9];

    printf("Cadastre o usuario: ");
    lerUsuario(usuario);

    printf("\nCadastre a senha: ");
    lerSenha(senha);

    printf("\n\nLogin\n");

    printf("Usuario: ");
    lerUsuario(usuarioLogin);

    printf("\nSenha: ");
    lerSenha(senhaLogin);

    if (strcmp(usuario, usuarioLogin) == 0 &&
        strcmp(senha, senhaLogin) == 0) {

        printf("\n\nOK");
    }
    else {
        printf("\n\nAcesso negado");
    }

    return 0;
}