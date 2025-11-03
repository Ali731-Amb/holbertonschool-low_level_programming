/**
 * _memcpy - Copie n octets de la zone mémoire src vers la zone mémoire dest.
 * @dest: Pointeur vers la zone mémoire de destination.
 * @src: Pointeur vers la zone mémoire source.
 * @n: Le nombre d'octets à copier.
 *
 * Return: un pointeur vers la zone mémoire dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
