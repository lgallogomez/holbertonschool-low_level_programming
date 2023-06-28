/**
 *print_last_digit - prints last digit of a number
 *@n: number to check
 *Return: 0.
 */

#include <stdio.h>
#include "main.h"

int print_last_digit(int n)
{
	int last_digit;

	if(n < 0)
	{
		last_digit = (n * -1)
		_putchar(n + '0');
		return (-n);
	}
	else
		_putchar(last_digit);
	return (last_digit);
}
