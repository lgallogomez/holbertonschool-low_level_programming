/**
 *print_line - prints a line using putchar
 *@n: # of lines to print
 *Return: printed lines, if 0 pr less \n
 */

#include "main.h"

void print_line(int n)
{
	if (n =< 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		for(i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
