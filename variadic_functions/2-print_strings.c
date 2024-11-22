#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Imprime des chaînes suivies d'une nouvelle ligne
 * @separator: La chaîne à imprimer entre les chaînes
 * @n: Le nombre de chaînes passées à la fonction
 *
 * Description: Cette fonction imprime les chaînes passées en arguments,
 * séparées par 'separator' si non NULL. Si une chaîne est NULL,
 * elle imprime (nil). Une nouvelle ligne est imprimée à la fin.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
