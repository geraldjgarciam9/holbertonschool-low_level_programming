#include <stdio.h>
/**
 * main - funcion principal
 *
 * Return: retorna 0
 */
int main(void)
{
char letra;
for (letra = 'a'; letra <= 'z'; letra++)
{
putchar(letra);
}
for (letra = 'A'; letra <= 'Z'; letra++)
{
putchar(letra);
}
putchar('\n');
return (0);
}
