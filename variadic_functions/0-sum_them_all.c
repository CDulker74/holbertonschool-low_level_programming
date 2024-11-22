#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calcule la somme de tous les paramètres
 * @n: Le nombre de paramètres
 *
 * Return: La somme de tous les paramètres
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int somme = 0;

	/* Vérification si aucun paramètre n'est passé */
	if (n == 0)
		return (0);

	/* Initialisation de la liste d'arguments variables */
	va_start(arguments, n);

	/* Parcours et sommation de tous les arguments */
	for (i = 0; i < n; i++)
		somme += va_arg(arguments, int);

	/* Nettoyage de la liste d'arguments */
	va_end(arguments);

	return (somme);
}
