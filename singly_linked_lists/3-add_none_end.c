#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - ajoute un nouveau nœud à la fin d'une liste list_t
 * @head: pointeur vers le pointeur de tête de la liste
 * @str: chaîne à dupliquer dans le nouveau nœud
 *
 * Return: l'adresse du nouvel élément, ou NULL si échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *last;
    char *dup_str;
    unsigned int len = 0;

    /* Créer un nouveau nœud */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    /* Dupliquer la chaîne */
    dup_str = strdup(str);
    if (dup_str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Calculer la longueur de la chaîne */
    while (str[len])
        len++;

    /* Initialiser le nouveau nœud */
    new_node->str = dup_str;
    new_node->len = len;
    new_node->next = NULL;

    /* Si la liste est vide, le nouveau nœud devient la tête */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* Sinon, trouver le dernier nœud */
    last = *head;
    while (last->next != NULL)
        last = last->next;

    /* Ajouter le nouveau nœud à la fin */
    last->next = new_node;

    return (new_node);
}