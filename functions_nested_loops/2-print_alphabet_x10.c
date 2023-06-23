#include <stdio.h>
/**
*print_alphabet_x10 - imprime en total 10 veces el alfabetp
*
*Return: nada
*/
void print_alphabet_x10(void)
{
int i=0;
char letra;
while (i < 10)
{
for (letra = 'A'; letra <= 'Z'; letra++)
{
putchar(letra);
}
}
putchar('\n');
i++;
}
