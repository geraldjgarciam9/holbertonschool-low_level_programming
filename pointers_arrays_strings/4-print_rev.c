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
int i = length -1;
for (int i; i >= 0; i--)
{
putchar(s[i]);
}
}
}
putchar('\n');
}
}
