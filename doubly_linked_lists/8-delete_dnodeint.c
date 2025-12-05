#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Supprime un nœud à un
 * index donné dans une liste doublement chaînée
 * @head: Pointeur vers le pointeur de tête de la liste
 * @index: L'index du nœud à supprimer (commence à 0)
 *
 * Return: 1 en cas de succès, -1 en cas d'échec
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);

	if (temp == *head)
	{
		if (temp->next == NULL)
		{
			*head = NULL;
		}
		else
		{
			*head = temp->next;
			(*head)->prev = NULL;
		}
	}
	else
	{
		dlistint_t *A = temp->prev;
		dlistint_t *B = temp->next;

		if (B != NULL)
		{
			B->prev = A;
		}
	}
	free(temp);
	return (1);
}
