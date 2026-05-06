#include<stdio.h>
#include<math.h>

// calcula a raiz 1
float raizxl(float a, float b, float c)
{
    float delta, xl; 

    delta = pow(b, 2) - 4 * a * c;
    float sqrt_delta = sqrt(delta);
    xl = (-b + sqrt_delta) / (2 * a);
    return xl;
}

// calcula a raiz 2
float raizxll(float a, float b, float c)
{
    float delta, xll; 

    delta = pow(b, 2) - 4 * a * c;
    float sqrt_delta = sqrt(delta);
    
    xll = (-b - sqrt_delta) / (2 * a);  
    return xll;
}


int main()
{
    // cria 3 variaveis
    float a, b, c;

    // pede ao usuario digitar uma equacao
    printf("Digite uma equacao do tipo ax^2+bx+c=0: \n");
    printf("Valor de a: ");

    // pede o valor de a, b e c no codigo abaixo
    scanf("%f", &a);

    printf("Valor de b: ");

    scanf("%f", &b);

    printf("Valor de c: ");

    scanf("%f", &c);

    // chama as raizes de 1 e 2 chamando as funcoes
    float raiz_xl = raizxl(a, b, c);
    float raiz_xll = raizxll(a, b, c);

    // imprime as raizes
    printf("As raizes da equacao sao %f e %f: \n", raiz_xl, raiz_xll);

    return 0;
}