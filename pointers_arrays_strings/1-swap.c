#include <stdio.h>
/**
*swap_int - intercambia el valor de las variables
*@a: almacena el valor inicial
*@b: almacena el valor inicial
*
*Return: actualiza el puntero
*/
void swap_int(int *a, int *b);
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
