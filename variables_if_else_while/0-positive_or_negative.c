#include <stdlib.h>
#include <time.h>
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
printf(n, " is positive");
}if (n==0)
{
printf (n, " is zero");
}else
{
printf(n, " is negative");
}
	return (0);
}
