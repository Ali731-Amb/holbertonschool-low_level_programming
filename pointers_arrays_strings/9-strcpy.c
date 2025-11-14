#include "main.h"

/**
 * _strcpy - copie la chaîne pointée par src, y compris \0
 * @dest: pointeur vers la destination
 * @src: pointeur vers la source
 *
 * Return: le pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')  /* tant qu’on n’a pas atteint la fin */
	{
		dest[i] = src[i];  /* on copie chaque caractère */
		i++;
	}

	dest[i] = '\0'; /* on ajoute le caractère nul final */

	return (dest);  /* on renvoie l’adresse de la destination */
}
