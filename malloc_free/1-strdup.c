#include <stdlib.h>
#include "main.h"

/**
 * char *_strdup - function that returns
 * a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *@str: String
 *
 *Return: NULL
 */

char *_strdup(char *str)
{
	int i = 0;

	int length = 0;

	char *copy = NULL;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	if (length == 0)
		return (NULL);

	copy = malloc((length + 1) * (sizeof(char)));

	{
		for (i = 0; i < length; i++)
			copy[i] = str[i];
		copy[length] = '\0';
	}

	return (copy);
}
