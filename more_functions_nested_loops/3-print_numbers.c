/**
 *print_numbers - prints numbers from 0 to 9
 *Return: 0
 */

#include <stdio.h>
#include "main.h"

void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n);
		n++;
		}
	_putchar('\n');
}
