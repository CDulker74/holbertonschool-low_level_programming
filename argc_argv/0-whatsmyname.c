#include <stdio.h>

/**
 * main - Affiche le nom du programme
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 *
 * Return: Toujours 0 (Succès)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Pour éviter l'avertissement de variable non utilisée */

	printf("%s\n", argv[0]);

	return (0);
}
