/**
 *_strncat
 *@dest: first string where second will concatenate to
 *@src: second string to send to dest
 *@n: number of bytes from c
 *Return: pointer to resulting string dest
 */

#include <stdio.h>
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int src_c = 0;
	int dest_c = 0;


	for (dest_c = 0; dest[dest_c] != '\0'; dest_c++)
		;
	for (src_c = 0; src_c < n && src[src_c] != '\0'; src_c++)
	{
		dest[dest_c] = src[src_c];
		dest_c++;
	}
	dest[dest_c] = '\0';
	return (dest);
}
