#include <stdio.h>
/**
 *imprimirAlfabeto - print alphabet
 *
 *Return: letra
 **/
void print_alphabet(void)
{
char letra;
for (letra = 'a'; letra <= 'z'; letra++) {
putchar(letra);
}
putchar('\n');
}
