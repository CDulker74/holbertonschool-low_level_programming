#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - ajoute un nouveau nœud à la fin d'une liste list_t
 * @head: pointeur vers le pointeur de la tête de la liste
 * @str: chaîne à dupliquer dans le nouveau nœud
 *
 * Return: adresse du nouvel élément, ou NULL si échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *last;
    char *dup_str;
    int len;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    dup_str = strdup(str);
    if (dup_str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    for (len = 0; str[len];)
        len++;

    new_node->str = dup_str;
    new_node->len = len;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    last = *head;
    while (last->next != NULL)
        last = last->next;

    last->next = new_node;

    return (new_node);
}