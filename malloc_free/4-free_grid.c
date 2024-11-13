#include <stdlib.h>

/**
 * free_grid - Libère une grille 2D précédemment créée par alloc_grid
 * @grid: Pointeur vers la grille 2D à libérer
 * @height: Hauteur de la grille
 *
 * Return: Rien
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	/* Libérer chaque ligne de la grille */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Libérer le tableau de pointeurs */ 
	free(grid);
}
