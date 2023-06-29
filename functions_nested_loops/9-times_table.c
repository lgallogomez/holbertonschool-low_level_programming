/**
 *times_table - prints the 9 times table starting with 0
 *Return: 0
 */

#include <stdio.h>
#include "main.h"

void times_table(void)
{
	int i = 0;
	int mult = 0;

	while (i <= 9)
	{
		while (mult <= 9)
		{
			i = i * mult;
			if (mult >= 10)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
				mult++;
			}
			else if (mult <= 9)
				{
					_putchar(i + '0');
					mult++;
			        }
			if (mult == 9)
			{
				i++;
				mult = 0;
			}
		 }
	}
}
