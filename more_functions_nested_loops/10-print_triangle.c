#include "main.h"

/**
 * print_triangle - Affiche un triangle suivi d'une nouvelle ligne
 * @size: La taille du triangle
 *
 * Description : Cette fonction affiche un triangle aligné à droite avec le caractère '#'.
 * Si size est 0 ou moins, elle affiche seulement une nouvelle ligne.
 */

void print_triangle(int size)
{
	int i, j; // i parcours les lignes, j parcours les colonnes

	// Si la taille est nulle ou négative, on affiche une nouvelle ligne
	if  (size <= 0)
		_putchar('\n');

	// Boucle pour chaque ligne du triangle
	for (i = 1; i <= size; i++)
	{
		// Boucle pour chaque colonne de la ligne
		for (j = 1; j <= size; j++)
		{
			// On affiche un espace si la colonne est avant le début du triangle
			if (j <= size - i)
				_putchar(' ');
			// Sinon on affiche le caractère '#'
			else
				_putchar('#');
		}
		// Nouvelle ligne après chaque ligne du triangle
		_putchar('\n');
	}
}
