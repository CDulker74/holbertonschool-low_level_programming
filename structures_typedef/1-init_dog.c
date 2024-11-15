#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure dog à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire du chien
 *
 * Description: Cette fonction initialise les membres d'une structure dog
 * avec les valeurs fournies.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
