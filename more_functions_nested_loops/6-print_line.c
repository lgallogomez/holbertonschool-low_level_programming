/**
 *print_line - prints a straight line
 *@n: number of _ should be printed
 *Return: nothing
 */

#include <stdio.h>
#include "main.h"

void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (n <= 0)
		break;
		_putchar('_');
	}
	_putchar('\n');
}
