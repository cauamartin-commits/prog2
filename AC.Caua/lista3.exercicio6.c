#include<stdio.h>

// prototipo
int maiores(int n, int *vet, int x);

int main(){
    // lendo n (tamanho)
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // lendo o vetor
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Acrescente um elemento para a posicao %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // lendo x
    int x;
    printf("Digite um valor para x: ");
    scanf("%d", &x);

    // chamando a funcao e ligando a uma variavel
    int qnt_maiores = maiores(n, arr, x);

    // saida
    printf("%d valores sao maiores que x\n", qnt_maiores);

    return 0;
}

int maiores(int n, int *vet, int x){
    // soma comeca do 0
    int s = 0;
    for (int i = 0; i < n; i++){
        // se o elemento da lista for maior que o x, some + 1
        if (vet[i] > x)
        {
            s += 1;
        }
    }

    // retorne s
    return s;
}