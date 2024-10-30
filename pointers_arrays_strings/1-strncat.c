#include "main.h"

/**
 * _strncat - concatène n caractères de src à dest
 * @dest: chaîne de destination
 * @src: chaîne source
 * @n: nombre maximal de caractères à concaténer
 *
 * Return: pointeur vers la chaîne résultante dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Trouver la longueur de dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Concaténer au plus n caractères de src à dest */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Ajouter le caractère nul de terminaison */
	dest[dest_len + i] = '\0';

	return (dest);
}
