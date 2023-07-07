/**
 *_atoi - converts a string to an integer
 *@s: pointer to 0th element of string
 *Return: 0 when no numbers
 */

#include <stdio.h>
#include "main.h"

#include <stdio.h>

int _atoi(char *s)
{
        int toint = 0;
        int sign = 0;
        int negatives = 0;

        while (*s != '\0')
        {
            if (*s == '-')
            {
              negatives++;
              *s++;
            }
            if (*s >= '0' && *s <= '9')
                {
                  while (*s >= '0' && *s <= '9')
                    {
                        toint = (toint * 10) + (*s - '0');
                        s++;
                    }
                }
             if (*s + 1 < '0' || *s + 1 > '9')
            {
              break;
            }
        }
        if (negatives % 2 != 0)
        {
        return (toint * -1);
        }
        else
        {
        return (toint);
        }
}
