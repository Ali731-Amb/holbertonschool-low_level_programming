#include "main.h"
// Inclut le fichier d'en-tête principal

/**
 * print_square - Affiche un carré suivi d'une nouvelle ligne
 * @size: taille du carré
 *
 * Cette fonction affiche un carré formé de caractères '#'.
 * Si la taille est inférieure ou égale à 0, seule une nouvelle ligne est affichée.
 */

void print_square(int size)
{
    int i, j;
    // Déclaration des variables de boucle

    if (size <= 0)
    {
        // Si la taille est nulle ou négative, on affiche seulement un retour à la ligne
        _putchar('\n');
    }
    else
    {
        // Sinon, pour chaque ligne
        for (i = 0; i < size; i++)
        {
            // Pour chaque colonne de la ligne, on affiche '#'
            for (j = 0; j < size; j++)
            {
                _putchar('#');
            }
            // À la fin de chaque ligne, on retourne à la ligne suivante
            _putchar('\n');
        }
    }
}
