#include "main.h"
#include <stdlib.h>
/**
 * char *create_array - fonction qui crée un tableau
 * de caractères et l'initialise avec un caractère spécifique.
 *@size: taille du tableau
 *@c: caractère à utiliser pour initialiser le tableau
 *
 *Return: Pointeur vers le tableau initialisé ou NULL en cas d'échec
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = NULL;

	/* Allocation de mémoire pour le tableau de caractères */
	array = malloc(size * (sizeof(char)));

	/* Vérifie si l'allocation a échoué */
	if (array == NULL)
		return (NULL);

	/* Vérifie si la taille est nulle */
	else if (size == 0)
		return (NULL);

	/* Remplit le tableau avec le caractère donné */
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);

	/* Libération non nécessaire ici, array doit être retourné */
	/* free(array); */
}
