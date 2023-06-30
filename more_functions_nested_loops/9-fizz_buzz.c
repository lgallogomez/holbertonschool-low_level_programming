/**
 *main - prints 1 - 100, if mult 3 Fizz, if mult 5 Buzz
 *Return: 0
 */

#include <stdio.h>
#include "main.h"

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
			n++;
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
			n++;
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
			n++;
		}
		else
		{
			printf("%d ", n);
			n++;
		}
	}
	printf("\n");
	return (0);
}
