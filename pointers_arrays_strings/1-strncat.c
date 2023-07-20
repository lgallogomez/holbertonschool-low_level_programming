/**
 *char*_strncat
 *@dest: first string where second will concatenate to
 *@src: second string to send to dest
 *@n: number of bytes from c
 *Return: pointer to resulting string dest
 */

#include <stdio.h>
#include "main.h"

char *_strncat( char *dest, char *src, int n)
{
	int src_counter, dest_counter;

	for (dest_counter = 0; dest[dest_counter] != '\0'; dest_counter++)
		;
	for (src_counter = 0; src_counter < n; src_counter++)
	{
		dest[dest_counter] = src[src_counter];
		dest_counter++;
	}
	return (dest);
}
