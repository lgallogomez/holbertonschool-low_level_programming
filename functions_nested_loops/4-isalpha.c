/**
*_isalpha - checks if input is alphabet
*@c: the input to check
*return: 1 if is a letter, 0 if not.
*/
#include "main.h"

int _isalpha (int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
