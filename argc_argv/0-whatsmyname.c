#include <stdio.h>

/**
 * main - Point d'entrée principal du programme.
 * Cette fonction imprime le nom par lequel elle a été exécutée,
 * suivi d'un saut de ligne.
 *
 * @argc: Le nombre d'arguments sur la ligne de commande (non utilisé).
 * @argv: Un tableau de pointeurs vers les arguments de la ligne de commande.
 * argv[0] contient le nom du programme.
 *
 * Return: Toujours 0.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
