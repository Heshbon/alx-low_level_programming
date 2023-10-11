#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - a function that frees dogs
 * @d: the struct dog to be freed
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
