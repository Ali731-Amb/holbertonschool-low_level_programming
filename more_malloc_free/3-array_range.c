#include "main.h"
#include <stdlib.h>

/**
 *int *array_range - function that creates an array of integers.
 *@min: minimum integrer
 *@max: maximun integrer
 *
 *Return: ptr array
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int taille;

	if (min > max)
		return (NULL);

	taille = max - min + 1;

	ptr = malloc(sizeof(int) * taille);

	if (ptr == (NULL))
		return (NULL);

	for (i = 0; i < taille; i++)
		ptr[i] = min + i;

	return (ptr);
}
