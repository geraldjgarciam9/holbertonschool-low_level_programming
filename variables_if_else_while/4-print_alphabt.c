#include <stdio.h>
/**
 *main - funcion principal
 *
 *Return: retorna 0
 */
int main() {
    char letra;
for (letra = 'a'; letra <= 'z'; letra++)
{
if (letra != 'q' && letra != 'e')
{
putchar(letra);
}
}
putchar('\n');
return (0);
}
