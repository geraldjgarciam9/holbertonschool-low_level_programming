#include <stdio.h>
/**
*jack_bauer - funcion que retorna los minutos
*
*Return: void
*/
void jack_bauer(void);
void jack_bauer(void)
{
int horas, minutos;
for (horas = 0; horas < 24; horas++)
{
for (minutos = 0; minutos < 60; minutos++)
{
printf("%02d:%02d\n", horas, minutos);
}
}
}
