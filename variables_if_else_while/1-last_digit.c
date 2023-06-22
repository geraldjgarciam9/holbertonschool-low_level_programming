#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - funcion principal
 * 
 * Return: retorna 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int ult_dig = 0;
	ult_dig = n % 10;
if (ult_dig > 5)
{
    printf("Last digit of %d is and is greater than 5 \n", n);
    return (0);
}
if (ult_dig == 0)
{
    printf("Last digit of %d is 0 \n", n);
    return (0);
}
if (ult_dig < 6 && ult_dig != 0)
{
printf("Last digit of %d is and is less than 6 and not 0\n", n);
return (0);
}    
}
