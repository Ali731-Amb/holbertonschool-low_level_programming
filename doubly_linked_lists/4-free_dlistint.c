#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Libère complètement une
 *  liste doublement chaînée dlistint_t.
 * @head: Pointeur vers la tête de la liste.
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp; // Variable temporaire pour stocker le prochain nœud

    // Parcours de la liste jusqu'à ce que le pointeur head soit NULL
    while (head != NULL)
    {
        temp = head->next;      // Sauvegarde du pointeur vers le nœud suivant
        free(head);             // Libération de la mémoire du nœud courant
        head = temp;            // Passage au nœud suivant
    }
    // À la fin de la boucle, tous les nœuds ont été libérés
}
