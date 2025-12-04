#include "main.h"
#include <stdio.h>
// Ce fichier contient la fonction print_sign qui affiche et retourne le signe d'un nombre

/**
 * print_sign - Affiche le signe d'un nombre
 * @n: le nombre à évaluer
 *
 * Return: 1 si n est positif,
 * 0 si n est nul, et -1 si n est négatif
 */
int print_sign(int n)
{
    // Si n est supérieur à 0, afficher '+' et retourner 1
    if (n > 0)
    {
        _putchar('+');
        return (1);
    }
    // Si n est inférieur à 0, afficher '-' et retourner -1
    else if (n < 0)
    {
        _putchar('-');
        return (-1);
    }
    // Si n est égal à 0, afficher '0' et retourner 0
    else
    {
        _putchar('0');
        return (0);
    }
}
