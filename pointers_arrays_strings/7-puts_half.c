#include "main.h"

/**
 * puts_half - imprime la seconde moitié d'une chaîne
 * @str: la chaîne à imprimer
 */
void puts_half(char *str)
{
	int longueur = 0;
	int i, debut;

	/* Calculer la longueur de la chaîne */
	while (str[longueur] != '\0')
		longueur++;

	/* Déterminer le point de départ */
	if (longueur % 2 == 0)
		debut = longueur / 2;
	else
		debut = (longueur - 1) / 2 + 1;

	/* Imprimer la seconde moitié */
	for (i = debut; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
