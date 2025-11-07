#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - additionne des nombres positifs
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: 0 (succès), 1 (erreur)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
