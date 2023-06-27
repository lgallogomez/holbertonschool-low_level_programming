/**
 *print_alphabet - prints alphabet in lowercase using _putchar
 *Return: 0
 *
 */

#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
