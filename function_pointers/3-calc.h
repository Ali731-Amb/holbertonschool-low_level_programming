#ifndef MAIN_H
#define MAIN_H

/**
 * struct op - Structure op
 *
 * @op: L'opérateur (ex: '+', '-', '*', '/')
 * @f: Le pointeur vers la fonction associée à l'opérateur
 */
typedef struct op
{
char *op; /* Opérateur sous forme de chaîne de caractères */
int (*f)(int a, int b); /* Pointeur vers la fonction effectuant l'opération */
} op_t;

/* Additionne deux entiers */
int op_add(int a, int b);

/* Soustrait le deuxième entier du premier */
int op_sub(int a, int b);

/* Multiplie deux entiers */
int op_mul(int a, int b);

/* Divise le premier entier par le second (division entière) */
int op_div(int a, int b);

/* Calcule le modulo (reste de la division entière) de deux entiers */
int op_mod(int a, int b);

/*
 * Sélectionne la bonne fonction à utiliser selon l’opérateur donné en argument.
 * Retourne un pointeur vers la fonction correspondante.
 */
int (*get_op_func(char *s))(int, int);

#endif
