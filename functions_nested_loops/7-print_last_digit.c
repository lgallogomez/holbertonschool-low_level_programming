/**
*print_last_digit - does it by using the remainder when div by 10
*@n : argument to print the last digit
*Return: value of last digit
*/
#include "main.h"
#include <stdlib.h>

int print_last_digit(int n)
{
char t;
t = ((abs(n % 10)) + '0');
_putchar(t);
return (abs(n % 10));
}
