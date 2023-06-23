#include <stdio.h>
/**
*print_alphabet_x10 - imprime en total 10 veces el alfabetp
*
*Return: nada
*/
void print_alphabet_x10(void)
{
int i=1;
char letra;
while (i < 10)
{
for (letra = 'a'; letra <= 'z'; letra++)
{
putchar(letra);
}
}
i++;
putchar('\n');
}
