/**
 *sum_them_all - sums all parameters
 *@n: number of parameters
 *Return: 0 if n = 0
 */

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;

	va_list list;
	if (n == 0)
		return (0);
	va_start(list, n);
	for (; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
