#include <stdlib.h>

/**
 * _strdup - Renvoie un pointeur vers un nouvel espace mémoire alloué,
 *           qui contient une copie de la chaîne donnée en paramètre.
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

	/* Calcule la longueur de la chaîne d'entrée */
	for (len = 0; str[len]; len++)
		;

	/* Alloue de la mémoire pour la chaîne dupliquée */
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	/* Copie la chaîne */
	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
