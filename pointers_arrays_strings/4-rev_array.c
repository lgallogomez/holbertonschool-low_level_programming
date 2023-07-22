/**
 *reverse_array - reverses content of array of integers
 *@a:array of interegers to reverse
 *@n: number of elements of the array
 *Return: nothing
 */

#include <stdio.h>
#include "main.h"

void reverse_array(int *a, int n)
{
	int c1 = 0;
	int c2 = 0;
	int temp [1000];

	for (; a[c1] < n; c1++)
		temp[c1] = a[c1];
	for (; c2 < n; c2++)
	     a[c2] = temp[c1 - 1];
	     c1--;
}
