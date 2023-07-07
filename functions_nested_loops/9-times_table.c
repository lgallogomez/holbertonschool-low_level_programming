/**
 *times_table - prints the 9 times table starting with 0
 *Return: 0
 */

#include <stdio.h>
#include <stdlib.h>

void times_table(void)
{
        int i = 0;
        int mult = 0;
        int result;

        while (i <= 9)
	    {
           	while (mult <= 9)
		        {
                    result = i * mult;
                         if (mult == 9)
            			    {
                             	putchar(result + '0');
                             	i++;
                                mult = 0;
                                putchar('\n');
                                break;
            			    }
			            if (result > 9)
			                {
                                putchar(result / 10 + '0');
                				putchar(result % 10 + '0');
                				putchar(',');
                				putchar(' ');
                				mult++;
                			}
                        else if (result <= 9)
		                    {
                             	putchar(result + '0');
                             	putchar(',');
                             	putchar(' ');
				            	mult++;
		                    }      
	            }
	    }
	    
}

