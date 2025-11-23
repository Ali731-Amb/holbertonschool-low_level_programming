#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all -  function that returns the sum of all its parameters.
 *
 *@n: Nombre d'arguments
 *Return: LA somme de tous les arguments
 */

int sum_them_all(const unsigned int n, ...)

{
	int result = 0;
	unsigned int i;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

		for (i = 0; i < n; i++)
	{
		result = +va_arg(arg, int);
	}
	va_end(arg);
	return (result);
}
