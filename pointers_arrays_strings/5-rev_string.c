#include <stdio.h>
#include "main.h"

/**
 *rev_string - reverse string
 *@s: string to reverse
 *Return: nothing
 */

void rev_string(char *s)
{
	int it1 = 0;
	int it2 = 0;
	char temp[1000];

	for (; s[it1] != '\0'; it1++)
	{
		temp[it1] = s[it1];
	}
	it1--;
	for (; s[it2] != '\0'; it2++)
	{
		s[it2] = temp[it1];
		it1--;
	}
}
