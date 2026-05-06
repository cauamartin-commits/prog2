#include <stdio.h>

int main() {
    // variavel n
    int n;
    
    printf("Digite o numero de pessoas: ");// pedindo quantidade de pessoas ao usuario
    scanf("%d", &n);

    int idade;
    float altura;
    char sexo;

    int mulheres_20_35 = 0;
    int homens_altos = 0;

    float soma_alturas = 0.0;
    float soma_quadrado = 0.0;

    for (int i = 0; i < n; i++) {
        printf("Idade: ");
        scanf("%d", &idade);

        printf("Altura: ");
        scanf("%f", &altura);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        // mulheres
        if (sexo == 'F' || sexo == 'f') {
            if (idade >= 20 && idade <= 35) {
                mulheres_20_35++;
            }
        }

        // homens
        if (sexo == 'M' || sexo == 'm') {
            if (altura > 1.80) {
                homens_altos++;
            }
        }

        // fatores variância
        soma_alturas += altura;
        soma_quadrado += altura * altura;
    }

    // cálculo da média
    float media = soma_alturas / n;

    // variância
    float variancia = (soma_quadrado / n) - (media * media);
    printf("Mulheres entre 20 e 35 anos: %d\n", mulheres_20_35);
    printf("Homens com altura maior que 1.80m: %d\n", homens_altos);
    printf("Variancia: %.4f\n", variancia);

    return 0;
}