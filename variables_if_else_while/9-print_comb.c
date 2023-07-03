#include <stdio.h>

void main(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n == 9)
		{
			putchar(n + '0');
			break;
		}
		putchar(n + '0');
		putchar(',');
		putchar(' ');
		n++;
	}
}
