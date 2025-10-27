#include "main.h"

/**
 * print_numbers - prints numbers, from 0 to 9, followed by a new line
 *
 * Description: Uses _putchar to print all numbers, from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
		_putchar(numbers);
	_putchar('\n');

}
