#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to check
 * @accept: string valide
 *
 * Return: Always n.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s != '\0')
	{
		int trouve_dans_accept = 0;
		char *ptr_accept = accept;

		while (*ptr_accept != '\0')
		{
			if (*s == *ptr_accept)
			{
				trouve_dans_accept = 1;
				break;
			}
			ptr_accept++;
		}

		{
			if (trouve_dans_accept == 1)
			{
				n++;
				s++;
			}
			else
				break;
		}
	}
	return (n);
}
