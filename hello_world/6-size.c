#include <stdio.h>
/**
 *main - funcion que imprime los valores de los tipos de datos
 *
 *Return: devuelve 0
 */
int main()
{
 printf("%zu bytes\n", sizeof(char));
 printf("%zu bytes\n", sizeof(int));
 printf("%zu bytes\n", sizeof(float));
 printf("%zu bytes\n", sizeof(double));
 printf("%zu bytes\n", sizeof(short));
 printf("%zu bytes\n", sizeof(long));
 printf("%zu bytes\n", sizeof(long long));
return (0);
}
