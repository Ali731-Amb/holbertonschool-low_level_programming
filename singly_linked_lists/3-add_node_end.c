#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste list_t.
 * @head: Pointeur vers l'adresse du pointeur de tête (list_t **).
 * @str: La chaîne de caractères à dupliquer.
 *
 * Return: L'adresse du nouveau nœud, ou NULL si l'opération échoue.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	size_t i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i] != '\0')
		i++;
	new_node->len = i;

	new_node->next = NULL;

	if (*head == NULL)
	{

		*head = new_node;
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new_node;
	}

	return (new_node);
}
