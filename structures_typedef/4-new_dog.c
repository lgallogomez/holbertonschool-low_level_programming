/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: Null if function fails
 */

#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;
	char *new_name;

	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);
	else
	{
		if (name != NULL)
		{
			new_name = malloc((strlen(name)+1) * sizeof(char));
			newd->name = strcpy(new_name, name);
		}
		newd->age = age;
		if (owner != NULL)
		{
			new_owner = malloc((strlen(name)+1) * sizeof(char));
			newd->owner = strcpy(new_owner, owner);
		}

		newd->name = malloc(sizeof(name));
       	}
	return (newd);
}
