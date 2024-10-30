#include "main.h"

/**
 * _strncpy - copie une chaîne
 * @dest: chaîne de destination
 * @src: chaîne source
 * @n: nombre de caractères à copier
 *
 * Return: pointeur vers la chaîne résultante dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}  
