#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char frase[80]="o rato roeu a roupa do rei de roma";
char *p;
p = frase;
printf("A linha abaixo coloca m no indice 2\n");
p[2]='m';
printf("A linha do codigo abaixo coloca barra 0 finalizando a cadeia de caracteres no indice 6\n");
p[6]='\0';
printf("%s\n", frase);
printf("O printf acima do codigo imprime 'o mato'\n");
p = p + 3;
printf("A linha acima pega o p e inicializa no indice 3\n");
printf("%s\n",p);
printf("O printf acima imprime 'ato'\n");
printf("%d\n",strlen(frase));
printf("O printf acima imprime 6 que e o tamanho da frase, tendo em vista que foi cortada quando declararam p[2] como 'm'\n");

return 0;
}