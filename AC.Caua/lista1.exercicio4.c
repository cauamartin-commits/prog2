#include<stdio.h>

// funcao media
float media(float nota1, float nota2, float nota3)
{
    // calcula media
    float media = (nota1 + nota2 + nota3) / 3;

    // retorna media
    return media;
}

int main()
{
    // cria 3 variaveis float nota
    float nota1, nota2, nota3;

    // pede ao usuario digitar as 3 notas
    printf("DIGITE A PRIMEIRA NOTA: ");
    scanf("%f", &nota1);

    printf("DIGITE A SEGUNDA NOTA: ");
    scanf("%f", &nota2);

    printf("DIGITE A TERCEIRA NOTA: ");
    scanf("%f", &nota3);

    // cria uma variavel m que chama a funcao media
    float m = media(nota1, nota2, nota3);
    printf("Media: %f\n", m);

    // decisoes que imprimem se o aluno foi aprovado ou nao
    if (media >= 6) {
        printf("O aluno foi aprovado!\n");
    }

    if (media >= 4 && media < 6) {
        printf("O aluno podera fazer VS\n");
    }

    if (media < 4) {
        printf("Aluno Reprovado\n");
    }

   
    return 0;
}