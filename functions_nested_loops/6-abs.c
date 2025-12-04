#include <stdio.h>
#include "main.h"
// Fonction pour calculer la valeur absolue d'un entier
/**
 * _abs - Calcule la valeur absolue d'un entier
 * @n: l'entier à vérifier
 *
 * Retourne la valeur absolue de n
 */

int _abs(int n)
{
    // Si n est négatif
    if (n < 0)
        // On retourne l'opposé de n (qui sera positif)
        return (-n);
    else
        // Sinon, on retourne n tel quel
        return (n);
}
