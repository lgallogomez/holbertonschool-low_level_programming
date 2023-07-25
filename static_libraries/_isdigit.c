/**
 *_isdigit - checks for a digit from 0 to 9
 *@c: int number to check
 *Return: 1 if c is a digit, 0 otherwise
 */

#include <stdio.h>
#include "main.h"

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
