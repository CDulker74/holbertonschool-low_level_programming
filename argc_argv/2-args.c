#include <stdio.h>

/**
 * main - Affiche tous les arguments reçus
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
