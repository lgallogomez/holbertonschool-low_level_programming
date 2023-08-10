/**
 *print_triangle - prints triangle
 *@size: size of triangle
 *Return: nothing
 */

#include <stdio.h>
#include "main.h"

void print_triangle(int size)
{
	int row = 0;
	int space = 0;
	int hash = 0;

	for (row = 0; row < size; row++)
	{
		for (space = 0; space < size - row - 1; space++)
		{
			_putchar(' ');
		}
		for (hash = 0; hash < row + 1; hash++)
		{
			_putchar('#');
		}
	}
}
