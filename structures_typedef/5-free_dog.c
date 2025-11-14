#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - libère la mémoire allouée pour un chien
 * @d: pointeur vers la structure à libérer
 *
 * Description: Libère d'abord les champs internes,
 * puis la structure principale.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
