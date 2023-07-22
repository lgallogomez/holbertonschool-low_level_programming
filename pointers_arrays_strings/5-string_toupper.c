/**
 *string_toupper - changes all lowercase letter of string to uppercase
 *@a: pointer to char where string to transform is
 *Return: pointer to the string transformed
 */
#include <stdio.h>
#include "main.h"

char *string_toupper(char *a)
{
	int c = 0;

	for (; a[c] != '\0'; c++)
	{
		if (a[c] > 96 && a[c] < 123)
		{
			a[c] = a[c] - 32;
		}
	}
	return (a);
}
