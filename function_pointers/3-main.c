/**
 * main- performs simple aritmetic operations
 * @argc: counts number of arguments passed
 * @argv: array of pointers with values passed
 * Return: nothing 
*/

#include "3-calc.h"

int main(int argc, char *argv[])
{
int second_num, first_num, result;

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' 
	&& *argv[2] != '/' && *argv[2] != '%')
{
	printf("Error\n");
	exit(99);
}
if ((*argv[2] == '%' || *argv[2] == '/') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
first_num = atoi(argv[1]);
second_num = atoi(argv[3]);
result = get_op_func(argv[2])(first_num, second_num);
printf("%d\n", result);
return (0);
}
