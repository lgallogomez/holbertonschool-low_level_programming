/**
 *_strcat - contatenates two strings
 *@dest: string where the 2nd string will be appended
 *@src: the string thats going to be appended on the det string
 *Return: a pointer to th resulting string in dest
 */

#include <stdio.h>
#include "main.h"

char *_strcat(char *dest, char *src)
{
	int src_counter, dest_counter;

	for (dest_counter = 0; dest[dest_counter] != '\0'; dest_counter++)
		;
	for (src_counter = 0; src[src_counter] != '\0'; src_counter++)
	{
		dest[dest_counter] = src[src_counter];
		dest_counter++;
	}
	return (dest);
}
