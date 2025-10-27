#include "main.h"

/**
 * print_most_numbers - prints numbers, from 0 to 9,Do not print 2 and 4,
 *  followed by a new line
 * Description: Uses _putchar to print all numbers, from 0 to 9,
 * Do not print 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
char numbers;

{

	for (numbers = '0'; numbers <= '9'; numbers++)
	if (numbers != 4 && numbers != 2)
	_putchar(numbers);
}
	_putchar('\n');

}
