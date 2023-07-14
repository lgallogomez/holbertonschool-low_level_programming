/**
 *create_array - creates array of chars
 *@size: size of memory block to allocate
 *@c: char to initialize the memory block
 *Return: pointer to array, NULL if size 0 or fails
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *string;
	int index = 0;

	string = malloc(sizeof(c) * (size + 1));
	if (size == 0)
	{
		return (NULL);
	}
	if (string == NULL);
	{
		return (NULL);
	}
	while (index < size)
	{
		string[index] = c;
		index++;
	}
	string[index] = '\0';
	return (string);
	free (string);
}
