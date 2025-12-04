// Fichier : 3-op_functions.c
// Fonctions d'opérations arithmétiques : addition, soustraction, multiplication, division, modulo
#include "3-calc.h"

/**
 * op_add - Fonction qui retourne la somme de a et b
 * @a: premier nombre
 * @b: deuxième nombre
 *
 * Return: la somme de a + b
 */
int op_add(int a, int b)
{
	// Additionne a et b
	return (a + b);
}

/**
 * op_sub - Fonction qui retourne la différence de a et b
 * @a: premier nombre
 * @b: deuxième nombre
 *
 * Return: la différence de a et b
 */
int op_sub(int a, int b)
{
	// Soustrait b de a
	return (a - b);
}

/**
 * op_mul - Fonction qui retourne le produit de a et b
 * @a: premier nombre
 * @b: deuxième nombre
 *
 * Return: le produit de a et b
 */
int op_mul(int a, int b)
{
	// Multiplie a et b
	return (a * b);
}

/**
 * op_div - Fonction qui retourne le quotient de a et b
 * @a: premier nombre
 * @b: deuxième nombre
 *
 * Return: le quotient de a et b
 */
int op_div(int a, int b)
{
	// Divise a par b
	return (a / b);
}

/**
 * op_mod - Fonction qui retourne le reste de la division de a par b
 * @a: premier nombre
 * @b: deuxième nombre
 *
 * Return: le reste de la division de a et b
 */
int op_mod(int a, int b)
{
	// Calcule le reste de la division entière de a par b
	return (a % b);
}
