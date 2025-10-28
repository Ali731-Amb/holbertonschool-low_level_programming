#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size: The size of the triangle
 *
 * Description: This function prints a right-aligned triangle made of
 * the character '#'. If size is 0 or less, it prints only a new line.
 */

void print_triangle(int size)
{
	int i, j;

	if  (size <= 0)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
				_putchar(' ');
			else
				_putchar('#');
		}
				_putchar('\n');
	}
}
