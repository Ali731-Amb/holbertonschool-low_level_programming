#include "main.h"
#include <stdlib.h>

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
	size_t i = 0;
	size_t len1 = 0;
	size_t len2 = 0;
	char *result;
	{
		if (s1)
			while (len1[s1])
				s1++;
	}
	{
		if (s2)
			while (len2[s2])
				s2++;
	}
	result = malloc(len1 + len2 + 1);

	{
		if (s1)
			for (i = 0; i < len1; i++)
				result[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
		result[len1 + i] = s2[i];

	result[len1 + len2] = '\0';

	return (result);
}
