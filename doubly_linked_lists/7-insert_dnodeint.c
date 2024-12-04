#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Insère un nouveau nœud à une position donnée
 * @h: Pointeur vers un pointeur sur la tête de la liste
 * @idx: Index où le nouveau nœud doit être ajouté
 * @n: Valeur à stocker dans le nouveau nœud
 *
 * Return: L'adresse du nouveau nœud, ou NULL si échec
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

    if (idx == 0)
        return add_dnodeint(h, n);

    while (temp != NULL && i < idx - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL && i < idx - 1)
        return NULL;

    if (temp != NULL && temp->next == NULL)
        return add_dnodeint_end(h, n);

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = temp->next;
    new_node->prev = temp;
    temp->next->prev = new_node;
    temp->next = new_node;

    return new_node;
}