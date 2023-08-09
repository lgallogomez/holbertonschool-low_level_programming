/**
 *main- prints number of argumnets passed to it
 *@argc: counts number of arguments
 *@argv: array with arguments value
 *Return: 0 if success, other if error
 */

#include <stdio.h>

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
