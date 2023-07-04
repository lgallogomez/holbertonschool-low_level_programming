/**
 *print_rev - prints a string in reverse
 *@s: pointer to string
 *Return: 0
 */

#include <stdio.h>
#include "main.h"

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
