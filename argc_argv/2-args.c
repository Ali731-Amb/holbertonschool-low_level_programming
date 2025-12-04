#include <stdio.h>

/**
 * main - Affiche tous les arguments reçus par le programme.
 *
 * Cette fonction parcourt tous les arguments transmis au programme
 * depuis la ligne de commande et les affiche un par un, chacun sur une ligne séparée.
 *
 * @argc: Le nombre d'arguments passés au programme (y compris le nom du programme).
 * @argv: Un tableau de chaînes de caractères contenant les arguments.
 *          argv[0] est toujours le nom du programme.
 *
 * Return: Toujours 0 (succès).
 */
int main(int argc, char *argv[])
{
    int i; /* Variable pour l'itération */
    /* On masque l'avertissement pour une variable non utilisée si besoin */
    (void) argv;
    {
        /* Boucle pour afficher chaque argument reçu */
        for (i = 0; i < argc; i++)
            printf("%s\n", argv[i]);
    }
    return (0); /* Fin normale du programme */
}
