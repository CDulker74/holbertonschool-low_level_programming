#include <stdio.h>

/**
 * main - Affiche le nombre d'arguments passés au programme
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
