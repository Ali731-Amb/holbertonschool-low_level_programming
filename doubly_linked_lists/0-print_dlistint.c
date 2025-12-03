#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_dlistint - Imprime tous les éléments d'une
 * liste doublement chaînée dlistint_t.
 * @h: Pointeur constant vers le premier nœud de la liste.
 *
 * Return: Le nombre de nœuds dans la liste (size_t).
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		count++;
		h = h->next;
	}

	return (count);
}
