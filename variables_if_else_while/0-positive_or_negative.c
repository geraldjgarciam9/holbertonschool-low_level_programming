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
printf"is positive %d");
}if (n==0)
{
printf ("is zero %d");
}else
{
printf("is negative %d");
}
	return (0);
}
