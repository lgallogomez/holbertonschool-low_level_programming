/**
 *_abs - computes absolutes value of integer
 *@n: number to compute absolut value
 *Return: absolute number
 */

#include <stdio.h>
#include "main.h"

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
