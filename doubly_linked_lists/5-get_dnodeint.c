#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns
 *the nth node of a dlistint_t linked list.
 *
 *@head: Head
 *@index: index
 *Return: NULL ou temp.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
