#include <stdlib.h>
#include <time.h>

/**
 *main - assign a random number and prints if +, 0 or -
 *Return: 0
 *
 */
int main(void)
{
int n:

srand(time(0));
n = rand() - RAND_MAX / 2;
 if (n > 0)
   printf("%s is positive\n", n);
 else if (n = 0)
   printf("%s is zero\n", n);
 else
   printf("%s is negative\n", n);
return (0);
}
