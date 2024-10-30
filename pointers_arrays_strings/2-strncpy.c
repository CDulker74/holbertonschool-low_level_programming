#include "main.h"

/**
 * _strncpy - copie n caractères de src vers dest
 * @dest: chaîne de destination
 * @src: chaîne source
 * @n: nombre de caractères à copier
 *
 * Return: pointeur vers la chaîne résultante dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copier les caractères de src vers dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Si n est plus grand que la longueur de src, remplir le reste avec des '\0' */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}  
