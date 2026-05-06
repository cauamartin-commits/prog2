#include<stdio.h>


int main(void)
{
    //metodo 1
    float a1 = 3;
    float b1 = a1 / 2;
    float c1 = b1 + 3.1;

    printf("%f\n", c1);

    //metodo 2
    int a2 = 3;
    int b2 = a2 / 2;
    float c2 = b2 + 3.1;

    printf("%f\n", c2);

    // metodo 3
    int a3 = 3;
    int b3 = a3 / 2;
    int c3 = b3 + 3.1;

    printf("%d\n", c3);

    return 0;
}