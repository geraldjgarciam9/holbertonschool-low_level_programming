#include <stdio.h>
/**
* _isalpha - verifica si la letra es mayuscula o minuscula
*@c: vaiable que aloja el caracter
* Return: 1 si es minuscula o mayuscula y 0 si es otro caracter
**/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
