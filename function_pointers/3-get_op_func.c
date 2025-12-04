#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - sélectionne la bonne fonction selon l'opérateur
 * @s: opérateur (+, -, *, /, %)
 *
 * Return: pointeur vers la fonction correspondante,
 *         ou NULL si opérateur inconnu
 */

// Déclaration de la fonction qui retourne un pointeur vers une fonction prenant deux int en argument
int (*get_op_func(char *s))(int, int)
{
	// Tableau de structures associant chaque opérateur à la fonction correspondante
	op_t ops[] = {
		{"+", op_add}, // Addition
		{"-", op_sub}, // Soustraction
		{"*", op_mul}, // Multiplication
		{"/", op_div}, // Division
		{"%", op_mod}, // Modulo
		{NULL, NULL}}; // Fin du tableau (sentinelle)
	int i = 0;

	// Parcourt le tableau pour trouver l'opérateur correspondant
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0) // Comparaison des chaînes de caractères
			return ops[i].f; // Retourne le pointeur vers la fonction trouvée
		i++;
	}

	// Si aucun opérateur n'a été trouvé, retourne NULL
	return NULL;
}
