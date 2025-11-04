#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - function that searches a string for any of a set of bytes.
 *@s: string to check
 *@accept: sting valide
 *
 *Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr_accept = accept;

		while (*ptr_accept != '\0')
		{
			if (*s == *ptr_accept)
			{
				return (s);
			}

			ptr_accept++;
		}
		s++;
	}
	return (NULL);
}
