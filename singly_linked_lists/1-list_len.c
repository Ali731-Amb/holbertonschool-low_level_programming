#include "lists.h"

/**
 *list_len - function that returns the
 *number of elements in a linked list_t list.
 *
 *@h: Head
 *Return: Count
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
	if (h->str == NULL)
	return(-1);

	else
	count++;
	h = h->next;

}
return (count);

}
