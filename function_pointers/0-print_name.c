#include "function_pointers.h"
#include <stddef.h>
// Inclusion des fichiers d'en-tête nécessaires. "function_pointers.h" pour les prototypes,
// et <stddef.h> pour la définition de NULL.

/**
 * print_name - fonction qui imprime un nom à l'aide d'une fonction passée en paramètre.
 *
 * @name: nom à imprimer
 * @f: pointeur vers une fonction qui prend un char * en argument et ne retourne rien
 * Return: Rien
 */

void print_name(char *name, void (*f)(char *))
// La fonction prend en argument une chaîne de caractères (name)
// et un pointeur vers fonction (f) qui reçoit un char * en argument.
{
    if (name == NULL || f == NULL)
        // On vérifie que les pointeurs ne sont pas NULL pour éviter les comportements indéfinis.
        return;

    f(name);
    // On appelle la fonction pointée par f en lui passant le nom.
}
