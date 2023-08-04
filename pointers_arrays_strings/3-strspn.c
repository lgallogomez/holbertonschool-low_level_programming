/**
 *_strspn - gets length of prefix substring
 *@s: string
 *@accept: substring
 *Return: length of substring
 */

#include <stdio.h>
#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != accept[j])
	{
		i++;
		if (s[i] == accept[j])
		{
			while (s[i] == accept[j])
			{
				i++;
				j++;
			}
			return (j);
		}
	}
	return (0);
}
