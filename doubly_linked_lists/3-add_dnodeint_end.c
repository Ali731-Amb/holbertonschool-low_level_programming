#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Ajoute un nouveau nœud
 * à la fin d'une liste doublement chaînée.
 * @head: Double pointeur vers la tête de la liste.
 * @n: Donnée entière à stocker dans le nouveau nœud.
 *
 * Return: L'adresse du nouvel élément (new_node),
 * ou NULL si l'opération échoue.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
