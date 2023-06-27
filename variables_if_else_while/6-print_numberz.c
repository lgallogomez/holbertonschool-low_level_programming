/**
 *main - prints all single digit # from 0.
 *Return: 0
 */

#include <stdio.h>

int main(void)
{
	int single_dig_nums = 48;

	while (single_dig_nums <= 57)
	{
		putchar(single_dig_nums);
		single_dig_nums++;
	}
	putchar ('\n');
	return (0);
}
