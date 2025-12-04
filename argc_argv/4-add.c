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
	int i, j, sum = 0; // i et j sont des itérateurs, sum stocke la somme

	// Si aucun argument n'est fourni (autre que le nom du programme)
	if (argc == 1)
	{
		printf("0\n"); // Affiche 0
		return (0); // Termine le programme
	}

	// Parcourt chaque argument
	for (i = 1; i < argc; i++)
	{
		// Vérifie si chaque caractère de l'argument est un chiffre
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j])) // Si un caractère n'est pas un chiffre
			{
				printf("Error\n"); // Affiche un message d'erreur
				return (1); // Retourne 1 pour signaler une erreur
			}
		}
		// Convertit l'argument en entier et l'ajoute à la somme
		sum += atoi(argv[i]);
	}

	// Affiche la somme totale
	printf("%d\n", sum);
	return (0);
}
