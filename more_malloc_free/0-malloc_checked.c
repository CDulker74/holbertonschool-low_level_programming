#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire en utilisant malloc
 * @b: nombre d'octets à allouer
 *
 * Return: un pointeur vers la mémoire allouée
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
