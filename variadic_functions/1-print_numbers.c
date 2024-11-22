#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Imprime des nombres suivis d'une nouvelle ligne
 * @separator: La chaîne à imprimer entre les nombres
 * @n: Le nombre d'entiers passés à la fonction
 *
 * Description: Cette fonction imprime les nombres passés en arguments,
 * séparés par la chaîne 'separator' si elle n'est pas NULL.
 * Une nouvelle ligne est imprimée à la fin.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}