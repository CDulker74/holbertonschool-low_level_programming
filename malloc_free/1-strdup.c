#include <stdlib.h>

/**
 * _strdup - Duplique une chaîne de caractères
 * @str: La chaîne à dupliquer
 *
 * Return: Pointeur vers la nouvelle chaîne, ou NULL si échec
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int longueur, i;

	if (str == NULL)
		return (NULL);

	longueur = 0;
	while (str[longueur])
		longueur++;

	dup = malloc(sizeof(char) * (longueur + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= longueur; i++)
		dup[i] = str[i];

	return (dup);
}