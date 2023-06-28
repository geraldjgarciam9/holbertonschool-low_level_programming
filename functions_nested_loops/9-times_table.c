#include <stdio.h>
/**
*times_table - imprime las tablas de multiplicar
*
*Return: retorna el valor de la multiplicacion
*/
void times_table(void);
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 10; j++)
{
printf("%d, ", i * j);
}
printf("\n");
}
}
