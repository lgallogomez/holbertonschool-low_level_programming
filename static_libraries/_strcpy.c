#include <stdio.h>
#include "main.h"

/**
 *_strcpy - copies one string into another array
 *@dest: new array with content
 *@src: source array to copy content from
 *Return: pointer to new array
 */

char *_strcpy(char *dest, char *src)
{
	int it = 0;

	for (; src[it] != '\0'; it++)
	{
		dest[it] = src[it];
	}
	return (dest);
}
