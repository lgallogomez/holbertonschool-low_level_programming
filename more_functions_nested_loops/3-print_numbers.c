/**
* print_numbers - print # 0 to 9
* @void: returns 0
*/

#include "main.h"
void print_numbers(void)
{
int i;
i = 0;
while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
