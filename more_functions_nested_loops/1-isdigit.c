/**
 *_isdigit - checks for a digit between 0 & 9
 *@c: arg to check
 *return: 1 if is a digit else 0
 */

#include "main.h"
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
	return (1);
    }
    else
    {
	return (0);
    }
}
