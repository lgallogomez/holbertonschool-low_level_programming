/**
 *_strlen - returns string length
 *@s: pointer to char hold string to check
 *Return: string length
 */

#include <stdio.h>

int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
	{
		strlen++;
	}
	return (strlen);
}
