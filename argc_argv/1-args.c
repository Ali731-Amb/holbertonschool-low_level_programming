#include <stdio.h>
// Inclusion de la bibliothèque standard d'entrée/sortie

/**
 * main - Point d'entrée principal du programme.
 * Cette fonction affiche le nombre d'arguments passés au programme.
 *
 * @argc: Le nombre d'arguments sur la ligne de commande.
 * @argv: Un tableau de pointeurs vers les arguments de la ligne de commande.
 *
 * Return: Toujours 0 (Succès).
 */

int main(int argc, char *argv[])
{
	(void)argv; // On indique que argv n'est pas utilisé dans cette fonction

	// Affiche le nombre d'arguments passés au programme (sans compter le nom du programme)
	printf("%d\n", argc - 1);

	return (0); // Fin du programme avec succès
}
