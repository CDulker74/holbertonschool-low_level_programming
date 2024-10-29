#include "main.h"

/**
 * print_rev - imprime une chaîne en sens inverse, suivie d'un saut de ligne
 * @s: la chaîne à imprimer en sens inverse
 */
void print_rev(char *s)
{
	int longueur = 0;
	int i;

	/* Calculer la longueur de la chaîne */
	while (s[longueur] != '\0')
		longueur++;

	/* Imprimer la chaîne en sens inverse */
	for (i = longueur - 1; i >= 0; i--)
		_putchar(s[i]);

	/* Ajouter un saut de ligne à la fin */
	_putchar('\n');
}
