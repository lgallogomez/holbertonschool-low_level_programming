/**
 *_isupper - checks for uppercase character
 *@c: character to check is is uppercase
 *Return: 1 if c is uppercase, 0 otherwise
 */

#include <stdio.h>
#include "main.h"

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	return (0);
}
