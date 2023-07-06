/**
 *_atoi - converts a string to an integer
 *@s: pointer to 0th element of string
 *Return: 0 when no numbers
 */

#include <stdio.h>
#include "main.h"

int _atoi(char *s)
{
	int toint = 0;
	int sign  = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -1;
			*s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			toint = (toint * 10) + (*s - '0');
			*s++;
		}
		else
			*s++;
	}
	return (toint * sign);
}


int main(void)
{
	int nb;

	nb = _atoi("----98");
	printf("%d", nb);
	return (0);
}
