/**
 *main - prints alphabet but e & q
 *return: 0
 */

#include <stdio.h>
int main(void)
{
	char a = 97;

	while (a < 123)
	{
		if (a != 101 || a != 113)
		putchar(a);
	}
	a++;
	return (0);
}
