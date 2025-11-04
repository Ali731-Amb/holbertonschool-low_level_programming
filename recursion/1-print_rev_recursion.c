#include "main.h"

/**
 *_print_rev_recursion - Write a function that prints a string in reverse.
 *@s: strin to reverse
 *
 *Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == ('\0'))
		return;

	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
