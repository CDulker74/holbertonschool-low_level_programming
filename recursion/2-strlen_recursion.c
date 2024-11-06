#include "main.h"

/**
 * _strlen_recursion - Retourne la longueur d'une chaîne de caractèr
 * @s: La chaîne de caractères dont on veut connaître la longuer
 *
 * Return: La longueur de la chaîe
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
