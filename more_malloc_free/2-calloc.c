#include <stdlib.h>

/**
 * _calloc - Alloue de la mémoire pour un tableau
 * @nmemb: Nombre d'éléments
 * @size: Taille de chaque élément
 *
 * Return: Pointeur vers la mémoire allouée, ou NULL si échec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int total_size;
    unsigned char *byte_ptr;
    unsigned int i;

    /* Vérifier si nmemb ou size est 0 */
    if (nmemb == 0 || size == 0)
        return (NULL);

    /* Calculer la taille totale */
    total_size = nmemb * size;

    /* Allouer la mémoire */
    ptr = malloc(total_size);

    /* Vérifier si l'allocation a réussi */
    if (ptr == NULL)
        return (NULL);

    /* Initialiser la mémoire à zéro */
    byte_ptr = (unsigned char *)ptr;
    for (i = 0; i < total_size; i++)
        byte_ptr[i] = 0;

    return (ptr);
}
