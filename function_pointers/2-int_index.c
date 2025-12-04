#include "function_pointers.h"
#include <stddef.h>
// Inclusion de l'en-tête contenant la déclaration de la fonction et des types associés

/**
 * int_index - Écrit une fonction qui recherche un entier dans un tableau.
 *
 * @array: Le tableau d'entiers à parcourir
 * @size: Le nombre d'éléments dans le tableau
 * @cmp: Pointeur vers une fonction de comparaison qui prend un int en argument
 * Return: L'indice du premier élément pour lequel cmp ne renvoie pas 0 ou -1 si aucun élément ne correspond
 */

// Fonction qui retourne l'indice du premier élément du tableau qui satisfait cmp
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    // Vérifie si le tableau ou la fonction cmp sont nuls
    if (array == NULL || cmp == NULL)
        return (-1);

    // Vérifie si la taille du tableau est inférieure ou égale à 0
    if (size <= 0)
        return (-1);

    // Parcourt le tableau d'entiers
    for (i = 0; i < size; i++)
        // Si la fonction cmp renvoie une valeur différente de 0, retourne l'indice courant
        if (cmp(array[i]) != 0)
            return (i);

    // Si aucun élément ne satisfait la condition, retourne -1
    return (-1);
}
