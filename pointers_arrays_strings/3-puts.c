/*
*_puts - prints a string char by char
*@str: the pointer that receives the value
*/

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
		      
		
