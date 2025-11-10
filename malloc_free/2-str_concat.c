#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatène deux chaînes de caractères
 * @s1: Première chaîne
 * @s2: Deuxième chaîne
 *
 * Alloue une nouvelle chaîne contenant les caractères de s1
 * suivis des caractères de s2. Si s1 ou s2 est NULL, elle est
 * traitée comme une chaîne vide.
 *
 * Return: Pointeur vers la nouvelle chaîne allouée, NULL en cas d'erreur
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = 0;
	size_t len2 = 0;
	char *result;
	size_t i;

	if (s1)
		for (len1 = 0; s1[len1]; len1++)
			;

	if (s2)
		for (len2 = 0; s2[len2]; len2++)
			;

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	if (s1)
		for (i = 0; i < len1; i++)
			result[i] = s1[i];

	if (s2)
		for (i = 0; i < len2; i++)
			result[len1 + i] = s2[i];

	result[len1 + len2] = '\0';

	return (result);
}
