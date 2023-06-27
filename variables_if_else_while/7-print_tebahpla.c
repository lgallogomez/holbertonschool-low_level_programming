/**
 *main - prints lowercase alphabet in reverse using putchar
 *Return: 0.
 */

#include <stdio.h>

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
