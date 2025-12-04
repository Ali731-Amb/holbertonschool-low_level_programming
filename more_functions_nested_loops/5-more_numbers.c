#include "main.h"
/**
* more_numbers - Affiche 10 fois les nombres de 0 à 14,
* chacun suivi d'une nouvelle ligne.
*
* Return: void.
*/
void more_numbers(void)
{
	int numbers; // Variable pour parcourir les nombres de 0 à 14
	int count;   // Variable pour compter les 10 répétitions

	// Boucle 10 fois pour afficher la séquence de 0 à 14 à chaque tour
	for (count = 0; count < 10; count++)
	{
		// Boucle pour afficher les nombres de 0 à 14
		for (numbers = 0; numbers <= 14; numbers++)
		{
			// Si le nombre est supérieur ou égal à 10, afficher le chiffre des dizaines
			if (numbers >= 10)
			{
				_putchar ('0' + (numbers / 10));
			}
			// Afficher l'unité du nombre
			_putchar ('0' + (numbers % 10));
		}
		// Aller à la ligne après chaque séquence de 0 à 14
		_putchar('\n');
	}
}
