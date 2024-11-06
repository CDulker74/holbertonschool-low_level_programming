#include "main.h"

/**
 * is_prime_helper - Fonction auxiliaire pour vérifier si un nombre est premie
 * @n: Le nombre a verifier
 * @i: Le diviseur actuel a tester
 *
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Vérifie si un nombre est premie
 * @n: Le nombre a  vériier
 *
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
