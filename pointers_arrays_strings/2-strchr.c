#include <stdio.h>
#include "main.h"
/**
 *_strchr - finds 1st occurrence of char in string
 *@s: string to evaluate
 *@c: character to locate
 *Return: pointer to 1st occurrence if found, else NULL
 */

char *_strchr(char *s, char c)
{
	int it = 0;

	for (; s[it] != '\0'; it++)
	{
		if (s[it] == c)
		{

			s = s[it];
			return (s);
		}
	}
	return (NULL);
}
