/**
 *_islower - checks if char is lowercase
 *@c: character to check in int format ascii code
 *Return: 1 if char is lowercase, else 0
 */

#include <stdio.h>
#include "main.h"

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
