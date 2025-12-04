#include "main.h"

/**
 * print_line - Dessine une ligne droite dans le terminal.
 * @n: Nombre de caractères '_' à imprimer
 *
 * Description :
 * Si n est supérieur à 0, la fonction imprime n caractères '_'.
 * Puis, elle ajoute un retour à la ligne ('\n').
 * Si n est inférieur ou égal à 0, seule la nouvelle ligne est imprimée.
 *
 * Retour : Rien (void)
 */

void print_line(int n)
{
	int i;

	/* Boucle pour imprimer '_' n fois si n > 0 */
	for (i = 1; i <= n; i++)
		_putchar('_');

	/* Imprime un saut de ligne à la fin, peu importe la valeur de n */
	_putchar ('\n');
}
