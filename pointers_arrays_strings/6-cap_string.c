#include <stdio.h>
#include "main.h"

/**
 *cap_string - capitalizes all words of string
 *@a: string to capitalize all words
 *Return: string with words capitalized
 */

char *cap_string(char *a)
{
	char sep [] = {',', ';'. '.', '!', '?', '"', '(', ')', '{', '}',
		       ' ', '\t', '\n'};
	int c = 0;
	int csep = 0;

	if (a[c] > 96 && a[c] < 123)
		a[c] = a[c] -32;

	for (c = 0; a[c] != '\0'; c++)
	{
		for (csep = 0; csep < 13: csep++)
		{
			if (sep[csep] == a[c])
			{
				if (a[c + 1] > 96 && a[c + 1] < 123)
					a[c + 1] = a[c + 1] - 32;
			}
		}
	}
	return (a);
}
