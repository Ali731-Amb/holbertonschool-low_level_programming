#include "main.h"
/**
* more_numbers - t prints 10 times the numbers from 0 to 14,
* followed by a new line.
*
* Return: void.
*/
void more_numbers(void)
{
	int numbers;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
			{
				_putchar ('0' + (numbers / 10));

			}

		_putchar ('0' + (numbers % 10));
		}

		_putchar('\n');
	}
}
