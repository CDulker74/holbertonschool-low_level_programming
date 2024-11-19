#include <stdlib.h>

/**
 * alloc_grid - Alloue une grille 2D d'entiers
 * @width: Largeur de la grille
 * @height: Hauteur de la grille
 *
 * Description: Crée une grille 2D dynamique initialisée à zéro
 * Return: Pointeur vers la grille, ou NULL en cas d'échec
 */
int **alloc_grid(int width, int height)
{
    int **grille;
    int i, j;

    /* Vérification des dimensions invalides */
    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocation du tableau de pointeurs pour les lignes */
    grille = malloc(sizeof(int *) * height);
    if (grille == NULL)
        return (NULL);

    /* Allocation de chaque ligne et initialisation à zéro */
    for (i = 0; i < height; i++)
    {
        /* Allocation de la ligne courante */
        grille[i] = malloc(sizeof(int) * width);
        if (grille[i] == NULL)
        {
            /* Libération de la mémoire en cas d'échec */
            for (j = 0; j < i; j++)
                free(grille[j]);
            free(grille);
            return (NULL);
        }

        /* Initialisation de tous les éléments à zéro */
        for (j = 0; j < width; j++)
            grille[i][j] = 0;
    }

    return (grille);
}