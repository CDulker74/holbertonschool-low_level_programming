#include <stdlib.h>

/**
 * alloc_grid - Alloue une grille 2D d'entiers
 * @width: Largeur de la grille
 * @height: Hauteur de la grille
 *
 * Return: Pointeur vers la grille 2D allouée, ou NULL si échec
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allouer la mémoire pour les pointeurs de lignes */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	/* Allouer la mémoire pour chaque ligne */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* Libérer la mémoire déjà allouée en cas d'échec */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialiser chaque élément à 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
