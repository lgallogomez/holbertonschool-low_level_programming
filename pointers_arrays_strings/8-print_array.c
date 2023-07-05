/**
 *print_array - print n elements of an array of integers
 *@a: pointer to 0th element of array
 *@n:size of array
 *Return:0
 */

#include <stdio.h>
#include "main.h"

void print_array(int *a, int  n)
{
	int i = 0;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	n++;
	printf("%d", a[i]);
	printf("\n");
}
