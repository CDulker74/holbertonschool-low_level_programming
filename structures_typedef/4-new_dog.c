#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Crée un nouveau chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire du chien
 *
 * Return: Pointeur vers le nouveau chien, ou NULL si la fonction échoue
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_copy, *owner_copy;

    /* Allouer de la mémoire pour le nouveau chien */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* Copier le nom */
    name_copy = strdup(name);
    if (name_copy == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    /* Copier le propriétaire */
    owner_copy = strdup(owner);
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(new_dog);
        return (NULL);
    }

    /* Initialiser le nouveau chien */
    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return (new_dog);
}
