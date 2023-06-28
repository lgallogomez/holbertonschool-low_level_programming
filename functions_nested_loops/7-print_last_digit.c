/**
 *print_last_digit - prints last digit of a number
 *@n: number to check
 *Return: 0.
 */

#include <stdio.h>
#include "main.h"

int print_last_digit(int n)
{
	int last_digit = n % 10;
	
	if(last_digit < 0)
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	return (last_digit);
}
