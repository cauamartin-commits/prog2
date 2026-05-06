#include<stdio.h>

// prototipo da media
float media(int n, float *v);

// funcao principal
int main(){

    // lendo n
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // lendo vetor
    float arr[n];
    for (int i = 0; i < n; i++){
        printf("Digite o elemento da %d posicao: ", i + 1);
        scanf("%f", &arr[i]);
    }

    // chamando a funcao pela variavel m
    float m = media(n, arr);
    printf("A media dos elementos do vetor e: %.2f\n", m);

    return 0;
}

float media(int n, float *v){
    // float para soma, precisa ser do msm tipo que os elementos do vetor
    float s = 0;

    // loop para soma dos elementos
    for (int i = 0; i < n; i++){
        s += v[i];
    }

    // media e retorno da media
    float med = s / n;
    return med;
}