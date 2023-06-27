/**
 *main - prints all numbers of base 16 in lowecase with putchar
 *Return: 0
 */

#include <stdio.h>

int main(void)
{
	char i = '0';
	char b = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (b <= 'e')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
