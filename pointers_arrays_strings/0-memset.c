#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: Pointeur vers la zone mémoire à remplir.
 * @b: L'octet constant à utiliser pour le remplissage.
 * @n: Le nombre d'octets à remplir.
 *
 * Return: un pointeur vers la zone mémoire s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
