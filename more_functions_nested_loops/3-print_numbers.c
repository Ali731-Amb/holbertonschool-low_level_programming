#include "main.h"
// Inclusion du fichier d'en-tête principal où _putchar est déclaré

/**
 * print_numbers - Affiche les chiffres de 0 à 9 suivis d'une nouvelle ligne
 *
 * Description : Utilise _putchar pour afficher tous les chiffres de 0 à 9
 * Return : void
 */
void print_numbers(void)
{
    char numbers;
    // Déclaration de la variable qui va contenir chaque chiffre à afficher

    for (numbers = '0'; numbers <= '9'; numbers++)
        // Boucle de '0' à '9', pour afficher chaque chiffre
        _putchar(numbers);
    _putchar('\n'); // Affiche un saut de ligne après tous les chiffres
}
