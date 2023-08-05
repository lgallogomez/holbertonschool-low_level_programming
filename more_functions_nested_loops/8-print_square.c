/**
 *print_square - prints a square
 *@size: size of square
 *Return: nothing
 */

#include <stdio.h>
#include "main.h"

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
		_putchar('\n');
	for (; i < size; i++)
	{
		j = 0;
		for (; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
