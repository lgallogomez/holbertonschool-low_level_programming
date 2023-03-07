/**
 *more_numbers - print 10x the numbers 0 - 14 followed by \n
 *Return: 0
 */

#include "main.h"

void more_numbers(void) {
    int i, j;
    for (j = 0; j < 10; j++) { // loop 10 times to print each number 10 times
        for (i = 0; i <= 14; i++) { // loop through the numbers 0 to 14
            putchar(i + '0'); // print the current number as a character
        }
        putchar('\n'); // move to a new line after printing each number 10 times
    }
}
