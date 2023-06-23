/**
 *main - prints the alphabet in lowercase
 *Return: 0
 */

#include <stdio.h>
int main(void)
{
	char a = 97;

	while (a < 123)
	{
		putchar(a);
		printf("\n");
		a++;
	}
}
