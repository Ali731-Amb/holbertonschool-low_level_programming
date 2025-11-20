#include "function_pointers.h"
#include <stddef.h>

/**
 *print_name - function that prints a name
 *
 * @name: name
 * @f: pointeur de la fonction
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
