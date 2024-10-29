#include "main.h"

/**
 * _puts - imprime une chaine suivie d'un saut de ligne 
 * @str: la chaine a imprimer
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}
