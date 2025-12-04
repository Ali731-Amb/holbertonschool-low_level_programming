#include "main.h"

/**
 * print_alphabet - Affiche l'alphabet en minuscule, suivi d'une nouvelle ligne
 *
 * Description : Utilise _putchar pour afficher toutes les lettres minuscules de a à z
 * Return: void
 */
void print_alphabet(void)
{
char letter; // Déclaration d'une variable pour stocker la lettre courante

	for (letter = 'a'; letter <= 'z'; letter++) // Parcours les lettres de 'a' à 'z'
		_putchar(letter); // Affiche chaque lettre
	_putchar('\n'); // Affiche un retour à la ligne après l'alphabet

}
