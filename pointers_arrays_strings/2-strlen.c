/**
 * _strlen - Computes the length of a null-terminated string.
 *
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */

#include "main.h"

int _strlen(char *s)
{
    int length = 0;

    while (*s != '\0') {
        length++;
        s++;
    }

    return length;
}
