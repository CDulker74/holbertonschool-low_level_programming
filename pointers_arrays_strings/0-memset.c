#include "main.h"

/**
 * _memset - Remplit la mémoire avec un octet constan
 * @s: Pointeur vers la zone mémoire à rempl
 * @b: L'octet constant utilisé pour le remplissag
 * @n: Nombre d'octets à remplir
 *
 * Return: Pointeur vers la zone mémoire 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
