#include "function_pointers.h"
#include <stddef.h>

/**
 *int_index - Write a function that searches for an integer.
 *
 *@array: Tableau
 *@size: taille
 *@cmp: copie
 *Return: int_index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
{
	if (size <= 0)
		return (-1);
}
		for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
