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
	/* Initialisation des longueurs de s1 et s2 à 0 */
	size_t len1 = 0;
	size_t len2 = 0;
	char *result;
	size_t i;

	/* Calcul de la longueur de s1 si elle n'est pas NULL */
	if (s1)
		for (len1 = 0; s1[len1]; len1++)
			;

	/* Calcul de la longueur de s2 si elle n'est pas NULL */
	if (s2)
		for (len2 = 0; s2[len2]; len2++)
			;

	/* Allocation mémoire pour la nouvelle chaîne */
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL); /* Retourne NULL si l'allocation échoue */

	/* Copie de s1 dans la nouvelle chaîne */
	if (s1)
		for (i = 0; i < len1; i++)
			result[i] = s1[i];

	/* Copie de s2 à la suite de s1 */
	if (s2)
		for (i = 0; i < len2; i++)
			result[len1 + i] = s2[i];

	/* Ajout du caractère nul pour terminer la chaîne */
	result[len1 + len2] = '\0';

	return (result); /* Retourne la chaîne concaténée */
}
