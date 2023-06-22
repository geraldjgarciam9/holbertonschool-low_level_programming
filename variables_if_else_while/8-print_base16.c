#include <stdio.h>
/**
 * main - escribe los numeros hexadecimales
 *
 * Return: retorna 0
 */
int main(void)
{
int numero;
for (numero = 0; numero <= 15; numero++)
{
if (numero < 10)
{
putchar(numero + '0');
}
else
{
putchar(numero - 10 + 'a');
}
}
putchar('\n');
return (0);
}
