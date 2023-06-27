/**
 *print_alphabet_x10 - prints alphabet 10 tmes using _putchar
 *Return: void
 */

#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void)
{
	char letter = 'a';
	int counter = 0;

	while (counter <= 0)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		counter++;
	}
}
