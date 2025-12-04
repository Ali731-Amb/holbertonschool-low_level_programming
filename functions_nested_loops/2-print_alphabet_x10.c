#include "main.h"
/**
 * print_alphabet_x10 - Affiche dix fois l'alphabet en minuscules suivi d'une nouvelle ligne à chaque fois.
 *
 * Retour : void
 */
void print_alphabet_x10(void)
{
	char letter; // Variable pour stocker la lettre courante de l'alphabet
	int count;   // Compteur pour compter le nombre de fois que l'alphabet est affiché

	for (count = 0; count < 10; count++) // Boucle pour répéter dix fois
	{
		for (letter = 'a'; letter <= 'z'; letter++) // Affiche toutes les lettres de 'a' à 'z'
		{
			_putchar(letter); // Affiche la lettre courante
		}

		_putchar('\n'); // Ajoute un retour à la ligne après chaque alphabet
	}

}
// Fin de la fonction

