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
		printf("%d\n", 98);
	}
	while (n < 98)
	{
		printf("%d", n);
		printf(", ");
		n++;
		if (n == 98)
		{
			printf("%d\n", 98);
		}
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
		if (n == 98)
		{
			printf("%d\n", 98);
		}
	}
}
