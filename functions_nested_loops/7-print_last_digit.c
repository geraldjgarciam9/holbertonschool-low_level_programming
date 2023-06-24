#include <stdio.h>
/**
*print_sign - muestra el signo del  numero
*@num: guarda el numero
*@ultimo_digito: extrae el ultimo digito
*
*Return:retorna el ultimo digito
**/
int print_last_digit(int);
int print_last_digit(int)
{
int num;
int ultimo_digito = num % 10;
return (ultimo_digito);
}
