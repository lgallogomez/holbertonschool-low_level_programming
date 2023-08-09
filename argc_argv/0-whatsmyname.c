/**
 *main - prints name of executable file
 *@argc: counts number of arguments
 *@argv: argument vector with array of strings with value of arguments
 *Return: 0 if program completed successfully, other if error
 */

#include <stdio.h>

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
