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
int counter1 = 0;
int counter2 = 0;
char *newspace = NULL;
int space_for_concat = 0;
int counter_newspace = 0;

if (s1 == NULL && s2 == NULL)
{
	newspace = malloc(sizeof(char));
	newspace[counter_newspace] = '\0';
	return (newspace);
}


else if (s1 == NULL)
{
	while (s2[counter2] != '\0')
	{
		counter2++;
	}
	newspace = malloc(sizeof(char) * counter2 + 1);
	counter2 = 0;
	while (s2[counter2] != '\0')
	{
		newspace[counter_newspace] = s2[counter2];
		counter_newspace++;
		counter2++;
	}
	newspace[counter_newspace] = '\0';
	return (newspace);
}


else if (s2 == NULL)
{
	while (s1[counter1] != '\0')
	{
		counter1++;
	}
	newspace = malloc(sizeof(char) * counter1 + 1);
	counter1 = 0;
	while (s1[counter1] != '\0')
	{
		newspace[counter_newspace] = s1[counter1];
		counter_newspace++;
		counter1++;
	}
	newspace[counter_newspace] = '\0';
	return (newspace);
}


else
	while (s1[counter1] != '\0')
	{
		counter1++;
	}
counter1--;

while (s2[counter2] != '\0')
{
	counter2++;
}
space_for_concat = counter1 + 1 + counter2 + 1;
newspace = malloc(sizeof(char) * (space_for_concat));
if (newspace == NULL)
{
	return (NULL);
}

counter1 = 0;
counter2 = 0;
while (s1[counter1] != '\0')
{
	newspace[counter_newspace] = s1[counter1];
	counter_newspace++;
	counter1++;
}
while (s2[counter2] != '\0')
{
	newspace[counter_newspace] = s2[counter2];
	counter_newspace++;
	counter2++;
}
newspace[counter_newspace] = '\0';
return (newspace);
}
