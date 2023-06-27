/**
 *print_alphabet_x10 - prints alphabet 10 tmes using _putchar
 *Return: void
 */

#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	{
	_putchar('\n');
	}
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
print_alphabet_x10();
}
