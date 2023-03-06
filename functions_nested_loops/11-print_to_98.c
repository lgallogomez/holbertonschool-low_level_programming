/**
 *print_to_98 - takes input from user and prints natural # until 98
 *@n : number where print begins
 *Return: 0
 */

#include <stdio.h>

void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}
