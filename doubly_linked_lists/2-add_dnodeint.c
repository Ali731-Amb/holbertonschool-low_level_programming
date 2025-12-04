#include "lists.h"

/**
 * add_dnodeint - fonction qui ajoute un nouveau nœud
 * au début d'une liste doublement chaînée de type dlistint_t.
 *
 * @head: pointeur vers le pointeur de tête de la liste
 * @n: entier à placer dans le nouveau nœud
 * Return: adresse du nouveau nœud, ou NULL en cas d'échec
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    /* Allocation mémoire pour le nouveau nœud */
    new_node = malloc(sizeof(dlistint_t));

    /* Vérification que l'allocation a réussi */
    if (new_node == NULL)
        return (NULL);

    /* Affectation de la valeur à l'attribut 'n' */
    new_node->n = n;
    /* Le précédent est NULL car il sera le premier nœud */
    new_node->prev = NULL;

    /* Le prochain devient l'ancien premier nœud */
    new_node->next = *head;
    if (*head != NULL)
        /* Si la liste n'était pas vide, le précédent de l'ancienne tête pointe vers le nouveau nœud */
        (*head)->prev = new_node;

    /* Mise à jour du pointeur de tête pour pointer vers le nouveau nœud */
    *head = new_node;

    /* Retourne l'adresse du nouveau nœud */
    return (new_node);
}
