#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Supprime le nœud à l'index donné d'une liste dlistint_t
 * @head: Pointeur vers un pointeur sur la tête de la liste
 * @index: Index du nœud à supprimer
 *
 * Return: 1 si la suppression a réussi, -1 si elle a échoué
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;
    unsigned int i = 0;

    if (temp == NULL)
        return (-1);

    if (index == 0)
    {
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return (1);
    }

    while (temp != NULL && i < index)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
        return (-1);

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);

    return (1);
}