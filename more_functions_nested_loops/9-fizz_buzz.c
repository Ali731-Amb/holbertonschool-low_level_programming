#include <stdio.h>

/**
 * main - Affiche les nombres de 1 à 100, remplaçant les multiples de 3 et/ou 5
 *
 * Description :
 * Pour les multiples de 3, affiche "Fizz" ;
 * Pour les multiples de 5, affiche "Buzz" ;
 * Pour les multiples des deux, affiche "FizzBuzz".
 * Les nombres et mots sont séparés par un espace.
 *
 * Return: Toujours 0 (Succès)
 */

int main(void)
{
	int i;
	/* Boucle à travers les nombres de 1 à 100 */
	for (i = 1; i <= 100; i++)
	{
		/* Si i est un multiple de 3 et 5, affiche "FizzBuzz" */
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		/* Si i est un multiple de 3 seulement, affiche "Fizz" */
		else if (i % 3 == 0)
			printf("Fizz");
		/* Si i est un multiple de 5 seulement, affiche "Buzz" */
		else if (i % 5 == 0)
			printf("Buzz");
		/* Sinon, affiche le nombre courant */
		else
			printf("%d", i);
		/* Ajoute un espace après chaque élément, sauf après le dernier */
		if (i < 100)
			putchar (' ');
	}
	/* Nouvelle ligne à la fin de la séquence */
	putchar('\n');
	return (0);
}
