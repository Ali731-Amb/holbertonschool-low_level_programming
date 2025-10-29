#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: string qu'on doit inversé
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
int i = 0;
int count;

	while (s[i] != '\0')

	{
		i++;
	}
		for (count = i - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar ('\n');
}
