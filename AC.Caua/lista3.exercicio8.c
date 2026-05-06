#include <conio.h>
#include <stdio.h>


void main(){
printf("Qual é o resultado do seguinte programa?");
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;
printf("contador/valor/valor/endereco/endereco");
for(i = 0 ; i <= 4 ; i++){
printf("Imprime o contador: ");
printf("\ni = %d",i);
printf("Imprime o valor: ");
printf(" vet[%d] = %.1f",i, vet[i]);
printf("Imprime o valor: ");
printf(" *(f + %d) = %.1f",i, *(f+i));
printf("Imprime o endereco");
printf(" &vet[%d] = %X",i, &vet[i]);
printf("Imprime o endereco: ");
printf(" (f + %d) = %X",i, f+i);
}
}