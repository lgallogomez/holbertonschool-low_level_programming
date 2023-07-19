/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
int counter1, counter2, space_for_concat, counter_newspace;
char *newspace = NULL;

if (s1 == NULL && s2 == NULL)
{
	newspace = malloc(sizeof(char));
	counter_newspace = 0;
	newspace[counter_newspace] = '\0';
	return (newspace);
}
else if (s1 == NULL || s1[counter1] == '\0')
{
	for (counter2 = 0; s2[counter2] != '\0'; counter2++);
	newspace = malloc(sizeof(char) * counter2 + 1);
	for (counter2 = 0; s2[counter2] != '\0'; counter2++)
	{
		newspace[counter_newspace] = s2[counter2];
		counter_newspace++;
	}
	newspace[counter_newspace] = '\0';
	return (newspace);
}
else if (s2 == NULL || s2[counter2] == '\0')
{
        for (counter1 = 0; s1[counter1] != '\0'; counter1++);
	newspace = malloc(sizeof(char) * counter1 + 1);
	for (counter1 = 0; s1[counter1] != '\0'; counter1++)
	{
		newspace[counter_newspace] = s1[counter1];
		counter_newspace++;
	}
	newspace[counter_newspace] = '\0';
	return (newspace);
}
else
	for (counter1 = 0; s1[counter1] != '\0'; counter1++);
counter1--;
for (counter2 = 0; s2[counter2] != '\0'; counter2++);
space_for_concat = counter1 + 1 + counter2 + 1;
newspace = malloc(sizeof(char) * (space_for_concat));
if (newspace == NULL)
{
	return (NULL);
}
for (counter1 = 0; s1[counter1] != '\0'; counter1++)
{
	newspace[counter_newspace] = s1[counter1];
	counter_newspace++;
}
for (counter2 = 0; s2[counter2] != '\0'; counter2++)
{
	newspace[counter_newspace] = s2[counter2];
	counter_newspace++;
}
newspace[counter_newspace] = '\0';
return (newspace);
}


int main(void)
{
	char *s;

	s = str_concat("", "Hello");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
