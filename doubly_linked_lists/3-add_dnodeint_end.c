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

	/* Alloue de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL); /* Retourne NULL si l'allocation échoue */

	/* Initialise les champs du nouveau nœud */
	new_node->n = n;
	new_node->next = NULL;

	/* Si la liste est vide, place le nouveau nœud en tête */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Sinon, parcourt la liste jusqu'à la fin */
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* Lie le dernier nœud au nouveau nœud */
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
