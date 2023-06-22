#include <stdio.h>
/**
 * main - escribe los numeros hexadecimales
 *
 * Return: retorna 0
 */
int main(void)
{
int numero;
for (numero = 0; numero <= 9; numero++)
{
putchar(numero + '0');
if (numero < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return 0;
}
