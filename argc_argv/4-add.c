/**
 *main - adds to positive numbers
 *@argc: number of arguments
 *@argv: pointer to array with arguments values
 *Return: 0 on error, 1 if symbols are passed, else on success
 */

#include <stdio.h>
#include <stdlib.h>

int check(char *ptr)
{
	int i = 0;

	for (; ptr[i] != '\0'; i++)
	{
		if (ptr[i] < 48 || ptr[i] > 57)
			return (1);
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0 && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}
			else if (check(argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + (atoi(argv[i]));
		}
		printf("%d\n", sum);
	}
	return (0);
}
