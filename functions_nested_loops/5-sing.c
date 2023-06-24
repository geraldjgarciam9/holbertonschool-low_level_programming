#include <stdio.h>
/**
*print_sign - muestra el signo del  numero
*@n: guarda el numero
*
*Return: 1 si es positivo,0 si es 0 y -1 si es negativo
**/
int print_sign(int n);
int print_sign(int n)
{
if (n > 0)
{
printf("+\n");
 return (1);
}
else if
(n == 0) 
{
printf("0\n");
 return (0);
}
else
{
printf("-\n");
 return (-1);
}
}
