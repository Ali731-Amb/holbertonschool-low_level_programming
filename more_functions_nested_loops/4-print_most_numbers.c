#include "main.h"
// Inclusion du fichier d'en-tête principal

/**
 * print_most_numbers - Affiche les chiffres de 0 à 9 sauf 2 et 4, suivi d'une nouvelle ligne
 * Description : Utilise _putchar pour afficher chaque chiffre sauf 2 et 4
 * Return: void
 */
void print_most_numbers(void)
{
    char numbers; // Déclaration de la variable pour parcourir les chiffres

    // Boucle à travers les caractères représentant les chiffres de 0 à 9
    for (numbers = '0'; numbers <= '9'; numbers++)
    {
        // Vérifie si le chiffre n'est pas 2 ni 4
        if (numbers != '4' && numbers != '2')
            _putchar(numbers); // Affiche le chiffre
    }
    _putchar('\n'); // Saut de ligne à la fin
}
