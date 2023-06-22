#include <stdio.h>
/**
 * main - escribe los numeros del 0 al 9
 * 
 * Return: retorna 0
 */
int main(void)
{
int numero;
for (numero = 0; numero <= 9; numero++)
{
putchar(numero + '0');
}
return (0);
}
