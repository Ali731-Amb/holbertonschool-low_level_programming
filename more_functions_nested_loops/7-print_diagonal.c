#include "main.h"
// Fonction pour dessiner une ligne diagonale dans le terminal

/**
 * print_diagonal - Dessine une ligne diagonale dans le terminal.
 * @n: nombre de lignes de la diagonale (nombre d'itérations)
 */

void print_diagonal(int n)
{
    int i, j;

    // Si n est inférieur ou égal à 0, on affiche juste un retour à la ligne
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        // Boucle pour chaque ligne
        for (i = 0; i < n; i++)
        {
            // Ajoute des espaces pour décaler le \ à droite à chaque ligne
            for (j = 0; j < i; j++)
            {
                _putchar(' ');
            }

            // Affiche le \ pour la diagonale
            _putchar('\\');
            // Retour à la ligne après chaque diagonale
            _putchar('\n');
        }
    }
}
