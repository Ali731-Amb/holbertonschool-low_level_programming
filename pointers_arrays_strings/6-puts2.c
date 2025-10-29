#include "main.h"
#include <stdio.h>

/**
 * puts2 - affiche un caractére sur 2 d'une string
 * @str: pointeur vers la chaine
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
			i++;

	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}

	}

	_putchar('\n');
}
