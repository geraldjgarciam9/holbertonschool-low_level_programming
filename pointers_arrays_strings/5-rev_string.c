#include <stdio.h>
#include <string.h>
/**
*rev_string - imprime una cadena al reves
*@*s: puntero
*
*Return: la cadena invertida
*/
void rev_string(char *s);
void rev_string(char *s)
{
int length = strlen(s);
int i, j;
for (i = 0, j = length - 1; i < j; i++, j--)
{
char temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
