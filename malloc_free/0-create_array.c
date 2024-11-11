#include <stdlib.h>

/**
 * create_array - Crée un tableau de caractères et l'initialis
 * @size: La taille du tableau a cr�er
 * @c: Le caractère d'initialisaton
 * Return: Un pointeur vers le tableau, ou NULL si éche
 */
char *create_array(unsigned int size, char c)
{
	char *tableau;
	unsigned int i;

	if (size == 0)
		return (NULL);

	tableau = malloc(sizeof(char) * size);
	if (tableau == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tableau[i] = c;

	return (tableau);
}
