/**
*puts2 - print every other char of a str 1st line and followed by new line
*@str : pointing to an string
*/

#include "main.h"

void puts2(char *str)
{
	int i;

	i = 0;
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
