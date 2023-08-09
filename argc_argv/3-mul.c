/**
 *main- multiplies 2 numbers
 *@argc: number of arguments passed to the program
 *@argv: array with arguments values
 *Return: 0 on success, 1 on error
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int result, firstn, secn;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		firstn = atoi(argv[2]);
		secn = atoi(argv[3]);
		result = firstn * secn;
		printf("%d\n", result);
		return (0);
	}
}
