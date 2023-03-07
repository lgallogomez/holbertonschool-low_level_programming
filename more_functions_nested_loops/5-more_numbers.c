/**
 *more_numbers - print 10x the numbers 0 - 14 followed by \n
 *Return: 0
 */

#include "main.h"

void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
}
_putchar(i < 10 ? i + '0' : '1');
if (i >= 10) _putchar(i % 10 + '0');
}
_putchar('\n');
}
}
