#include <stdio.h>

int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
	{
		strlen++;
	}
	return(strlen);
}

