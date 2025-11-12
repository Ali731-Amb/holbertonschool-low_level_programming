#ifndef DOG_H
#define DOG_H

/**
 * struct dog -Define a new type struct dog
 * @name: Nom
 * @age: Age
 * @owner: Owner
 *
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
