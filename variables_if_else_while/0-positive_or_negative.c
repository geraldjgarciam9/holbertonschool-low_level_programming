#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - es la funcion principal
 *
 *Return: retorna 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n>0)
{
printf("%d is positive ", n);
return (0);
}if (n==0)
{
printf("%d is zero", n);
return (0);
}else
{
printf("%d is negative", n);
}
return (0);
}
