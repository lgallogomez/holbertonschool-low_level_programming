#include "main.h"
/**
* print_rev - print a string in reverse using pointers variables.
* @s: Points the pointer value
* 
*/
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
i--;
for (; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
