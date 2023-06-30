/**
 *more_numbers - prints 10 times 0 to 14
 *Return: 0
 */

#include <stdio.h>
#include "main.h"

void more_numbers(void)
{
	int counter = 0;
	int n = 0;

	while (counter <= 10)
	{
		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
		counter++;
	}
}
