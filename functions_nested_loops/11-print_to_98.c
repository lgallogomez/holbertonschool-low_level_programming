/**
 *print_to_98 - prints argument passed until 98
 *@n: number to start printing until 98
 *Return: nothing
 */

#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	while (n < 99)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 97)
	{
		printf("%d, ", n);
		n--;
	}
}
