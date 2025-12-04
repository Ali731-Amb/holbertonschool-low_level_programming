// Inclusion du fichier d'en-tête principal où la fonction est probablement déclarée
#include "main.h"

/**
 * _islower - fonction qui vérifie
 * si un caractère est en minuscule.
 * @c: caractère de l'alphabet à vérifier
 * Return: 1 si c est une minuscule, 0 sinon.
 */

int _islower(int c)
{
	// Vérifie si 'c' est compris entre 'a' et 'z' (caractères minuscules)
	if (c >= 'a' && c <= 'z')
		return (1); // Retourne 1 si c'est une minuscule
	else
		return (0); // Retourne 0 sinon
}
