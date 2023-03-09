/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character '\' should be printed
 *
 * Return: void
 */

#include "main.h"
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
