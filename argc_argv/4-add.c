#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * est_nombre - Vérifie si une chaîne est un nombre valide
 * @str: Chaîne à vérifier
 *
 * Return: 1 si c'est un nombre valide, 0 sinon
 */
int est_nombre(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 * main - Additionne des nombres positifs
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 *
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{
	int i, somme = 0, nombre;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!est_nombre(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		nombre = atoi(argv[i]);
		if (nombre > 0)
			somme += nombre;
	}

	printf("%d\n", somme);
	return (0);
}
