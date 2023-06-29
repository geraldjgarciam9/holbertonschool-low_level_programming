#include <stdio.h>
/**
*print_to_98 - imprime todos los numeros hasta el 98 
*@n: almacena el numero dado
*
*Return: devuelve el resultado en suma
*/
void print_to_98(int n);
void print_to_98(int n)
{
while (n < 98 || n == 98)
{
printf("%d, ", n);
n++;
} 
while(n > 98)
{
printf("%d, ", n);
n--;
}  
}
