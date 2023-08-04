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
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;
	char *new_name;
	char *new_owner;

	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
	{
		free(newd);
		return (NULL);
	}
	else
	{
		if (name != NULL)
		{
			new_name = malloc((strlen(name)+1) * sizeof(char));
			newd->name = strcpy(new_name, name);
		}
		else
		{
			newd->name = NULL;
		}
		newd->age = age;
		if (owner != NULL)
		{
			new_owner = malloc((strlen(owner)+1) * sizeof(char));
			newd->owner = strcpy(new_owner, owner);
		}
		else
		{
			newd->owner = NULL;
		}
       	}
	return (newd);
}
