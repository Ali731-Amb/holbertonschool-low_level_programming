#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 *print_numbers - function that prints numbers, followed by a new line.
 *@separator: La virgule
 *@n: Nombre d'un argument
 *
 *Return: Nombre à afficher avec la virgule.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	int nombre;

	va_start(arg, n);

			for (i = 0; i < n; i++)
		{
			nombre = va_arg(arg, int);
			printf("%d", nombre);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}

	printf("\n");
	va_end(arg);
}
