/**
 *puts_half - prints the second half of a string
 *@str: pointer to character
 *Return: nothing
 */

#include <stdio.h>
#include "main.h"

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = ((i -1) / 2);
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
}
