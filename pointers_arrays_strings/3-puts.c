#include "main.h"

/**
 * _puts - imprime une chaine suivie d'un saut de ligne
 * @str: la chaine a imprimer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
