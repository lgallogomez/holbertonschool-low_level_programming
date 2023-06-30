/**
 *print_most_numbers - prints numbers from 0 to 9 but 2 and 4
 *Return: 0
 */

#include <stdio.h>
#include "main.h"

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		n++;
	}
	_putchar('\n');
}
