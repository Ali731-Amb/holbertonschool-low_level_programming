#include "main.h"
#include <stddef.h>

/**
 * _strstr - Localise une sous-chaîne.
 * @haystack: La chaîne principale dans laquelle chercher.
 * @needle: La sous-chaîne à trouver.
 *
 * Return: Un pointeur vers le début de la sous-chaîne localisée,
 * ou NULL si la sous-chaîne n'est pas trouvée.
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr_h;
	char *ptr_n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		ptr_h = haystack;
		ptr_n = needle;
		while (*ptr_n != '\0' && *ptr_h == *ptr_n)
		{
			ptr_h++;
			ptr_n++;
		}

		if (*ptr_n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
