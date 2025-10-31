#include "main.h"

/**
 * puts_half - The function should print the second
 * half of the string
 *@str: string
 *
 */

void puts_half(char *str)
{
int i = 0, n;

	while (str[i] != '\0')
		{
		i++;
		}
			if (i % 2 == 0)
			{
				n = i / 2;
			}
			else
			{
				n = (i + 1) / 2;
			}

	for (n = i / 2; str[n] != '\0'; n++)
		{
		_putchar(str[n]);
		}

	_putchar('\n');
}
