#include "main.h"
#include <stddef.h>

/**
 *_strchr - function that locates a character in a string.
 * @s: String to check
 * @c: Charactere to check
 *
 * Return: s otherwise return NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == ('\0'))
	{
		return (s);
	}
	return (NULL);
}
