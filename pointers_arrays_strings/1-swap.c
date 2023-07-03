/**
 *swap_int - swaps values of two integers
 *@a: 1st number
 *@b; 2nd number
 *Return: nothing
 */

#include <stdio.h>

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
	}
