/**
 *_isalpha - function checks if argument is char
 *@c: character to check
 *Return: 1 if c is char upp lower else 0
 */

#include <stdio.h>
#include "main.h"

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) && (c >= 65 && c<= 90))
	{
		return (1);
	}
	else
		return (0);
}
