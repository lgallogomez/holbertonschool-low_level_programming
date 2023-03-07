/**
 *_isupper - checks if arg is upper case
 *@c: arg tu check
 *Return: 1 if upper else 0
 */

#include "main.h"
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
