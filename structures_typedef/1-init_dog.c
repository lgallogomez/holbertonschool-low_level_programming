#include <stddef.h>
#include "main.h"

/**
 *init_dog - initializes a variable of type struct dog
 *@d: structure type
 *@name: name of new dog
 *@age: age of new dog
 *@owner of new dog
 *Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
