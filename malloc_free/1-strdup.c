#include <stdlib.h>

/**
 * _strdup - Renvoie un pointeur vers un nouvel espace mémoire alloué,
 * qui contient une copie de la chaîne donnée en paramètre.
 * @str: La chaîne à dupliquer
 *
 * Return: Un pointeur vers la chaîne dupliquée, ou NULL en cas d'échec
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		
		
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
