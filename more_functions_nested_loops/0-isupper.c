#include "main.h"
// Inclusion du fichier d'en-tête principal pour les prototypes de fonctions

/**
 * _isupper - Vérifie si le caractère est une lettre majuscule
 * @c: le caractère à vérifier
 * Return: 1 si c est une lettre majuscule, 0 sinon
 */

int _isupper(int c)
{
    // Vérifie si le code ASCII de c est entre 'A' et 'Z'
    if (c >= 'A' && c <= 'Z')
        // Retourne 1 si c est une lettre majuscule
        return (1);
    else
        // Retourne 0 sinon
        return (0);
}
