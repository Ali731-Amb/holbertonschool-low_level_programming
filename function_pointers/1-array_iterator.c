#include "function_pointers.h"
#include <stddef.h>
// Inclusion du fichier d'en-tête contenant les prototypes des fonctions et tailles
// Inclusion du module standard pour size_t

/**
 * array_iterator - Exécute une fonction donnée en paramètre sur chaque élément d'un tableau
 * @array: Tableau d'entiers à parcourir
 * @size: Taille du tableau
 * @action: Pointeur vers la fonction à appliquer à chaque élément du tableau
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;
    // Déclaration de la variable d'itération

    if (array == NULL || action == NULL)
        return;
    // Vérifie que le tableau et la fonction ne sont pas nuls, sinon on quitte immédiatement

    {
        for (i = 0; i < size; i++)
            action(array[i]); // Applique la fonction à chaque élément du tableau
    }

} // Fin de la fonction
