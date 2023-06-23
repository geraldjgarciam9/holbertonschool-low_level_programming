#include <stdio.h>
/**
* _islower - imprime en total 10 veces el alfabetp
*@c: the char to evaluar
*
* Return: 1 si es minuscula y 0 si es otro caracter
**/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
