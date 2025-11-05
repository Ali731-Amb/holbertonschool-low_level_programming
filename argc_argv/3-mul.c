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
	if (argc != 3)
	{
		printf("%s\n", "Error");
			return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int mul = num1 * num2;
							 printf("%d\n", mul);
	}
	return (0);
}
