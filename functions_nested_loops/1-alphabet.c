#include <stdio.h>
/**
 *print_alphabet - imprime el alfabeto
 *
 *Return: letra
 **/
void print_alphabet(void)
{
char letra;
for (letra = 'a'; letra <= 'z'; letra++)
putchar(letra);
putchar('\n');
}
