#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Libère complètement une liste chaînée list_t.
 * Libère chaque nœud et la chaîne de caractères (str) qu'il contient.
 * @head: Pointeur vers le premier nœud de la liste.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
