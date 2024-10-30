#include "main.h"

/**
 * _strcat - Concatène deux chaînes
 * @dest: La chaîne de destination
 * @src: La chaîne source à ajouter à dest
 *
 * Return: Un pointeur vers la chaîne résultante dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Trouver la fin de dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Copier src à la fin de dest */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Ajouter le caractère nul de terminaison */
	dest[dest_len + i] = '\0';

	return (dest);
}
