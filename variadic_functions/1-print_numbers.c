#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Imprime des nombres, suivis d'une nouvelle ligne
 * @separator: La chaîne à imprimer entre les nombres
 * @n: Le nombre d'entiers passés à la fonction
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n); // Initialisation de la liste d'arguments

    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int)); // Imprime le nombre actuel

        // Imprime le séparateur si ce n'est pas le dernier nombre et si le séparateur n'est pas NULL
        if (i < n - 1 && separator != NULL)
            printf("%s", separator);
    }

    printf("\n"); // Nouvelle ligne à la fin

    va_end(args); // Nettoyage de la liste d'arguments
}