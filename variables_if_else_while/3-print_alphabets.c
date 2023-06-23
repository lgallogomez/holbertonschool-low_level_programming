/**
 *main - prints alph in lower and then in upper
 *Return: 0
 */

#include <stdio.h>

int main(void)
{
	char a = 97;
	char b = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (b < 91)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
