#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Libère une liste dlistint_t
 * @head: Pointeur vers la tête de la liste
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    while (head != NULL)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}