#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
// Inclusion des en-têtes nécessaires :
// - "lists.h" pour la structure de liste doublement chaînée
// - <stdio.h> pour printf
// - <stdlib.h> mais ici non utilisé explicitement

/**
 * print_dlistint - Imprime tous les éléments d'une
 * liste doublement chaînée dlistint_t.
 * @h: Pointeur constant vers le premier nœud de la liste.
 *
 * Return: Le nombre de nœuds dans la liste (size_t).
 */
// Fonction qui affiche tous les éléments d'une liste doublement chaînée
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0; // Variable pour compter le nombre de nœuds

    // Parcourir la liste jusqu'à la fin (quand h devient NULL)
    while (h != NULL)
    {
        printf("%d\n", h->n); // Affiche la valeur du nœud courant
        count++;              // Incrémente le compteur de nœuds
        h = h->next;          // Passe au nœud suivant
    }

    return (count); // Retourne le nombre total de nœuds
}

