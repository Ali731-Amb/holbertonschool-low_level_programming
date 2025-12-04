#include <stdlib.h>
#include <stdio.h>
/**
 * main - Multiplie deux nombres passés en arguments.
 *
 * Le programme vérifie s'il reçoit exactement deux arguments
 * (en plus du nom du programme lui-même).
 * @argc: Le nombre d'arguments sur la ligne de commande.
 * @argv: Un tableau de pointeurs vers les arguments.
 *
 * Return: 0 si la multiplication réussit, 1 en cas d'erreur
 * (nombre d'arguments incorrect).
 */

int main(int argc, char *argv[])
{
	/* Vérifie qu'il y a exactement 3 arguments (le programme + 2 nombres) */
	if (argc != 3)
	{
		printf("%s\n", "Error");
		/* Retourne 1 en cas d'erreur d'arguments */
		return (1);
	}
	else
	{
		/* Conversion des arguments de type chaîne en int */
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		/* Calcul de la multiplication */
		int mul = num1 * num2;

		/* Affichage du résultat */
		printf("%d\n", mul);
	}
	/* Retourne 0 si tout s'est bien passé */
	return (0);
}
