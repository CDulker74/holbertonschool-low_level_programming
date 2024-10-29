#include <stdio.h>
#include "main.h"

/**
 * print_array - imprime n éléments d'un tableau d'entiers
 * @a: le tableau d'entiers
 * @n: le nombre d'éléments à imprimer
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");
}
