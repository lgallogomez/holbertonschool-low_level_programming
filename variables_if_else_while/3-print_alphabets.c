#include <stdio.h>
/**
* print lower and upper case alphabet with putchar
* *Return 0
*/

int main(void)
{
char ch = 'a';
while(ch <= 'z')
{
putchar(ch);
ch++;
}
ch = 'A';
while(ch <= 'Z')
{
putchar(ch);
ch++;
}
return(0);
}
