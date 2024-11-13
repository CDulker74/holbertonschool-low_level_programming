#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes de caractères
 * @s1: La première chaîne
 * @s2: La deuxième chaîne
 *
 * Return: Un pointeur vers la nouvelle chaîne concaténée, ou NULL si échec
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Traiter NULL comme une chaîne vide */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculer les longueurs des chaînes */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allouer la mémoire pour la nouvelle chaîne */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	/* Copier s1 */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copier s2 */
	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];

	/* Ajouter le caractère nul de fin */
	concat[i] = '\0';

	return (concat);
}
