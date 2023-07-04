/**
 *_puts2 - prints one char yes the other not until reaches end using array index position
 *@str: pointer to character
 *Retun: nothing
 */

#include <stdio.h>
#include "main.h"

void _puts2(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
