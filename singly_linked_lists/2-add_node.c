#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *add_node - function that adds a new
 *node at the beginning of a list_t list.
 *@head: head of the list
 *@str: chaine that need to copy
 *
 *Return: new node lenght
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	{
		while (str[i] != '\0')
			i++;
	}
	new_node->len = i;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
