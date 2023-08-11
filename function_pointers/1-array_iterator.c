/**
*array_iterator - executes a function given as a parameter on each element
*@array: array to iterate
*@size: size of array
*@action: pointer to function to use
*Return: nothing
*/

#include <stdio.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
    long unsigned int i = 0;

    if (size == 0 || array == NULL)
        return;

    for(; i < size; i++)
    {
        action(array[i]);
    }
}