/**
 *_puts - prints a string
 *@str: pointer to char to print
 *Return: 0
 */

#include <stdio.h>
#include "main.h"

void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
