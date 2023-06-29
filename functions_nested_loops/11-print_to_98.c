/**
 *print_to_98 - prints argument passed until 98
 *@n: number to start printing until 98
 *Return: nothing
 */

#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	return (0);
}
