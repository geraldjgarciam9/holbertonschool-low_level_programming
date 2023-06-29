#include <stdio.h>
#include <string.h>
/**
*print_rev - imprime una cadena al reves
*@*s: puntero
*
*Return: la cadena invertida
*/
void print_rev(char *s);
void print_rev(char *s)
{
int length = strlen(s);
for (int i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
