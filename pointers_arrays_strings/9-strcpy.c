#include <stdio.h>
#include "main.h"

/**
 *_strcpy - copyes string pointed to by src into dest
 *@dest: buffer where src string will be copied
 *@src: string to copy string from
 *Return: pointer to dest buffer
 */

char *_strcpy(char *dest, char *src)
{
	int it = 0;

	for (;src[it] != '\0'; it++)
		dest[it] = src[it];
	return (dest);
}
