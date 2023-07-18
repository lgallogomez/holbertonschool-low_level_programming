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
	int sign  = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			toint = (toint * 10) + (*s - '0');
			s++;
		}
		else if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			if (toint != 0)
				break;
			else
			{
				s++;
				continue;
			}
		}
		else
			s++;
	}
	if (sign == -1)
	{
		return (toint * sign);
	}
	else
		return (toint);
}
