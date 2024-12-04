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

    // Si la liste est vide
    if (temp == NULL)
        return (-1);

    // Cas de suppression du premier nœud
    if (index == 0)
    {
        *head = temp->next;  // Met à jour la tête de la liste
        if (*head != NULL)   // Si la liste n'est pas vide après suppression
            (*head)->prev = NULL;
        free(temp);          // Libère le nœud
        return (1);
    }

    // Parcourt la liste pour trouver le nœud à supprimer
    while (temp != NULL && i < index)
    {
        temp = temp->next;
        i++;
    }

    // Vérifie si le nœud à supprimer existe
    if (temp == NULL)
        return (-1);

    // Ajuste les pointeurs pour supprimer le nœud
    if (temp->prev != NULL)
        temp->prev->next = temp->next;  // Met à jour le pointeur suivant du nœud précédent

    if (temp->next != NULL)
        temp->next->prev = temp->prev;  // Met à jour le pointeur précédent du nœud suivant

    free(temp);  // Libère le nœud

    return (1);  // Indique que la suppression a réussi
}