#include<stdio.h>
#include<stdlib.h>

// prototipo
int testa_PA(int n, int *v);

// funcao principal
int main(){

    // cria n e um do while que nao aceita n < 3
    int n;
    do {
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);
    } while(n < 3);

    // uso do malloc para alocacao dinamica
    int *v = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Digite o valor da posicao %d do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }

    // chama a funcao que retorna o valor de k
    int k = testa_PA(n, v);
    printf("%d", k);

    free(v);
    return 0;
}

int testa_PA(int n, int *v){
    // cria a soma
    int soma = 0;

    // verifica o k
    int verif_k = 0;

    // loop comecando do i = 1
    for (int i = 1; i < n; i++)
    {
        // calcula o k
        int k = (v[i] - v[0]) / i;
        // se o i == 1, faca
        if (i == 1){
            verif_k = k;
        }
        // se i for maior que 1 e igual a variavel de verificacao, some 1 a soma
        if (i > 1 && k == verif_k)
        {
            soma++;
        }
    }
    int f = n - 2;
    if (soma == f){
        return verif_k;
    }
    else{
        printf ("O vetor nao segue uma PA\n");
        return 1;
    }
}