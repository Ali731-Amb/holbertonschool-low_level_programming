#include "lists.h"

/**
 * dlistint_len - fonction qui retourne
 * le nombre d'éléments dans une liste doublement chaînée dlistint_t.
 *
 * @h: pointeur vers la tête de la liste
 * Return: nombre d'éléments
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* compteur pour suivre le nombre de nœuds parcourus */
	size_t count = 0;

	/* On parcourt la liste jusqu'à la fin (h == NULL) */
	while (h != 0)
	{
		count++; /* Incrémente le compteur à chaque nœud */
		h = h->next; /* Passe au nœud suivant */
	}
	/* Retourne le nombre total de nœuds */
	return (count);
}
