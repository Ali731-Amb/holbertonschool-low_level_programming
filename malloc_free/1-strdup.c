#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Retourne un pointeur vers un nouvel espace mémoire alloué contenant une copie de la chaîne donnée
 * @str: Chaîne de caractères à copier
 *
 * Return: Pointeur vers la nouvelle chaîne ou NULL en cas d'échec
 */

char *_strdup(char *str)
{
    int i = 0;
    // Variable pour parcourir la chaîne d'origine

    int length = 0;
    // Stocke la longueur de la chaîne

    char *copy;
    // Pointeur vers la nouvelle chaîne copiée

    if (str == NULL)
        // Vérifie si la chaîne passée en paramètre est NULL
        return (NULL);

    while (str[i] != '\0')
    {
        length++;
        i++;
    }
    // Calcule la longueur de la chaîne d'origine

    copy = malloc(length + 1);
    // Alloue dynamiquement de la mémoire pour la copie (+1 pour le \0)

    if (copy == NULL)
        // Vérifie si l'allocation a échoué
        return (NULL);

    {
        for (i = 0; i < length; i++)
            copy[i] = str[i];
    }
    // Copie chaque caractère de la chaîne originale dans la nouvelle zone mémoire

    copy[length] = '\0';
    // Ajoute le caractère de fin de chaîne

    return (copy);
}
