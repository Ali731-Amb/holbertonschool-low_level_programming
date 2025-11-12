#include "dog.h"
#include <stdio.h>

/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: Pointeur
 *@name: Name
 *@age: Age
 *@owner: Owner
 *
 *Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
