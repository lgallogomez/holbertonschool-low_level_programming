/**
 *print_name- prints a name
 *@name: pointer to char holds a name
 *@f: point er to function that takes a pointer to char
 *Return: nothing
 */

#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	else
		f(name);
}