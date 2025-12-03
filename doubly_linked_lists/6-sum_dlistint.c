#include "lists.h"

/**
 *sum_dlistint - function that returns the
 * sum of all the data (n) of a dlistint_t linked list
 *
 *@head: Head
 *Return: Sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0; // Initialiser la somme à 0
	dlistint_t *current = head; // Pointeur temporaire pour parcourir la liste

	while (current != NULL)
	{
		sum += current->n; // Ajouter la valeur du nœud actuel à la somme
		current = current->next; // Passer au nœud suivant
	}

	return (sum); // Retourner la somme totale
}
