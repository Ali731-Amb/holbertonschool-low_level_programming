#include "main.h"

/**
 * rev_string - inverse une chaîne de caractères
 * @s: pointeur vers la chaîne
 *
 * Return: rien
 */
void rev_string(char *s)
{
	int len = 0, start = 0, end;
	char temp;

	while (s[len] != '\0')
		len++;

	end = len - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
