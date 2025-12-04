#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
    int last; // Déclare une variable pour stocker le dernier chiffre

    last = n % 10; // Récupère le dernier chiffre du nombre (modulo 10)
    if (last < 0)
        last = -last; // Rend le chiffre positif si nécessaire (gestion des nombres négatifs)

    _putchar(last + '0'); // Affiche le dernier chiffre sous forme de caractère
    return (last); // Retourne le dernier chiffre
}
