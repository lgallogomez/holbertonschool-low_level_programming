/**
 *_strdup - copies a string into another new memory loction using malloc
 *@str: string to duplicate
 *Return: NULL if str is NULL, pointer to new copy on success
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
	char *new_copy = 0;
	int index = 0;
	int length_str = 0;
	int index_str = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length_str] != '\0')
	{
		length_str++;
	}

	new_copy = malloc(sizeof(char) * (length_str + 1));
	if (new_copy == NULL)
	{
		return (NULL);
	}
	while (index_str <= length_str)
	{
		if (index_str == length_str)
		{
			break;
		}
		new_copy[index] = str[index_str];
		index++;
		index_str++;
	}
	return (new_copy);
}
