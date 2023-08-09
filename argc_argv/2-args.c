/**
 *main- prints all arguments it receives
 *@argc: number of arguments
 *@argv: array with arguments values
 *Return: 0 on success, other on error
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
