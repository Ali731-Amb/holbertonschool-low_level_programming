#include "main.h"

/**
 * _isdigit - vérifie si le caractère passé est un chiffre (de 0 à 9).
 * @c: caractère à vérifier
 * Return: 1 si c est un chiffre, 0 sinon.
 */

int _isdigit(int c)
{
	/* Vérifie si c est compris entre les caractères '0' et '9' */
	if (c >= '0' && c <= '9')
		return (1); /* Retourne 1 si c'est un chiffre */
	else
		return (0); /* Retourne 0 sinon */
}
