#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplie deux nombres
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 *
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{
	int num1, num2, resultat;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	resultat = num1 * num2;

	printf("%d\n", resultat);

	return (0);
}
