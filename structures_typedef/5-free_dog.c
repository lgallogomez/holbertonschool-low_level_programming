#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *free_dog - frees a dog structure
 *@d: pointer to structure
 *Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL && d->name != NULL)
	{
		free(d->name);
	}
	if (d != NULL && d->owner != NULL)
	{
		free(d->owner);
	}
	if (d != NULL)
		free(d);
}
