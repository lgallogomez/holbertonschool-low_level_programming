/**
*swap_int - swaps two ints values
*
*@a: first value
*@b: second value
*/
#include "main.h"

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
