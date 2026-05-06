#include<stdio.h>
#include<stdlib.h>

// prototipo
int criar_vet(int *x, int *r, int *s);

// principal
int main(){
    // vetor r
    int r[5];
    // acrecentar elementos ao vetor r
    for (int i = 0; i < 5; i++){
        int valor;
        int repetido;

        // do-while
        do {
            repetido = 0;

            printf("Digite o valor da %d posicao do vetor r: ", i + 1);
            scanf("%d", &valor);

            // verifica se existe
            for (int j = 0; j < i; j++){
                if (valor == r[j]){
                    repetido = 1;
                    printf("Valor repetido\n");
                }
            }

        } while (repetido == 1);

        r[i] = valor;
    }

    // vetor s
    int s[10];
    for (int i = 0; i < 10; i++){
        printf("Digite o valor da %d posicao do vetor s: ", i + 1);
        scanf("%d", &s[i]);
    }

    // alocacao dinamica
    int *x = (int*) malloc(5 * sizeof(int));

    // chamando funcao
    int n = criar_vet(x, r, s);


    // loop para imprimir vetor x
    for (int i = 0; i < n; i++){
        printf("%d\n", x[i]);
    }

    free(x);

    return 0;
}

int criar_vet(int *x, int *r, int *s){
    // variavel n
    int n = 0;

    // loop for, preenchendo x
    for (int i = 0; i < 5; i++) {

        int existe = 0;

        for (int j = 0; j < 10; j++) {
            if (r[i] == s[j]) {
                existe = 1;
            }
        }
        if (existe == 1){
            x[n] = r[i];
            n++;
        }

    }
    return n;
}