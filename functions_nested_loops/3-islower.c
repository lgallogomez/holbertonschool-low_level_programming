/**
* _islower - checks for lowercase character.
* c: To prove
* Return: 1 if lowercase, 0 otherwise
*/
#include "main.h"
int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}
else
{
return (0);
}
}
