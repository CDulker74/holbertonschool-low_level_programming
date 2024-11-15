#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Libère la mémoire allouée pour un chien
 * @d: Pointeur vers la structure dog_t à libérer
 *
 * Description: Cette fonction libère la mémoire allouée pour le nom et le
 * propriétaire du chien, puis libère la structure elle-même.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Libérer la mémoire allouée pour le nom */
	if (d->name != NULL)
		free(d->name);

	/* Libérer la mémoire allouée pour le propriétaire */
	if (d->owner != NULL)
		free(d->owner);

	/* Libérer la structure dog_t elle-même */
	free(d);
}
