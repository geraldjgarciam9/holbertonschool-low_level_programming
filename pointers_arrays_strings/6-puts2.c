#include <stdio.h>
#include <string.h>
/**
*puts2 - imprime una cadena al reves
*@str: puntero
*
*Return: la cadena invertida
*/
void puts2(char *str);
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
putchar(str[i]);
i++;
}
i++;
}
putchar('\n');
}
