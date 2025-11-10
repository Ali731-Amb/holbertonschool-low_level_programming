#include "main.h"
#include <stdlib.h>
/**
 * char *create_array - function that creates an array
 * of chars, and initializes it with a specific char.
 *@size: taille du tableau
 *@c: Char
 *
 *Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = NULL;

	array = malloc(size * (sizeof(char)));

	if (array == NULL)
		return (NULL);

	else if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);

	free(array);
}
