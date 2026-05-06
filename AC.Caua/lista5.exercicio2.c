#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(void)
{
char texto[]= "foi muito facil";
int i;
for (i = 0; texto[i]!='\0'; i++)
{
if (texto[i] == ' ') break;
}
printf("O loop percorre a string e quebra quando ha espaco.\n");
i++;
printf("Imprime do m em diante\n");
for ( ; texto[i]!='\0'; i++)
{
printf("%c", texto[i]);
}
printf("\nO programa imprime 'muito facil'\n");
}