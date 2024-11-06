#include "main.h"

/**
 * factorial - Calcule le factoriel d'un nombre donné
 * @n: Le nombre dont on veut calculer le factoriel
 *
 * Return: Le factoriel de n, ou -1 si n est négatif
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
