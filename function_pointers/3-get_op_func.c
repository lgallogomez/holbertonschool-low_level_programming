#include "3-calc.h"
int (*get_op_func(char *s))(int, int)
{
	 int i;
	 
	 op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
	if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
			i++;
		}
	}
	return (NULL);
}