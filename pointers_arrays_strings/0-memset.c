#include <stdio.h>
#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: pointer to memory to fill
 *@b: byte to fill s
 *@n: number of bytes
 *Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
