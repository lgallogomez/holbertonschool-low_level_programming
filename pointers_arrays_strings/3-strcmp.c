/**
 *_strcmp - compares 2 strings
 *@s1: string 1
 *@s2: string 2
 *Return:  0 if equal, -15 if s1 lower ascii than s2, 15 if s1 higher
 */

#include <stdio.h>
#include "main.h"

int _strcmp(char *s1, char *s2)
{
int cs1 = 0;
int cs2 = 0;

for (cs1 = 0, cs2 = 0; s1[cs1] != '\0' && s2[cs2] != '\0'; cs1++, cs2++)
{
	if (s1[cs1] < s2[cs2])
		return (-15);
	else if (s1[cs1] > s2[cs2])
	{
		return (15);
	}
}
if (s1 == s2)
	break;
return (0);
}
