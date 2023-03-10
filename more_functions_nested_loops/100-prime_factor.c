/**
 * main - find & prints the largest prime factor of a #
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
    long n = 612852475143;
    int i;

    while (n % 2 == 0)
    {
        n /= 2;
    }

    for (i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
	{
            n /= i;
        }
    }

    if (n > 2)
    {
        printf("%ld\n", n);
    }

    return 0;
}
