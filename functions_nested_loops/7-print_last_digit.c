/**
 *print_last_digit - does it by using the remainder when div by 10
 *@n : argument to print the last digit
 */

#include "main.h"

int print_last_digit(int n)
{
	char i = n % 10;
	_putchar(i);
	return (i);
}
