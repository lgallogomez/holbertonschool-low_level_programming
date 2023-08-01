/**
 *times_table - prints the 9 times table starting with 0
 *Return: 0
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void times_table(void)
{
        int i = 0;
        int j = 0;
        int mult;

	for (; i < 10; i++)
	{
		for(; j < 10; j++)
		{
			mult = i * j;
			if (mult > 9)
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
		        }
			else
			{
				if (j == 0)
				{
					_putchar(mult + '0');
				}
				else
				{
					_putchar (' ');
					_putchar(mult + '0');
				}
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
