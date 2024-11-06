#include "main.h"

/**
 * _print_rev_recursion - Imprime une chaîne de caractères à l'envers
 * @s: La chaîne de caractères à imprimer
 *
 * Description: Cette fonction utilise la récursion pour imprimer
 * chaque caractère de la chaîne en commençant par la fin.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
