#include <stdio.h>

void jack_bauer(void)
{
    int hour_dec = 0;
    int hour_units = 0;
    int min_dec = 0;
    int min_units = 0;
    
    while (hour_dec <= 2)
    {
       if (hour_units == 9)
       {
           hour_dec++;
           hour_units = 0;
           min_dec = 0;
           min_units = 0;
       }
            
        while (hour_units < 9)
        {
            if (hour_dec == 2 && hour_units <= 3)
            {
                break;
            }
            if (min_dec == 5)
            {
                hour_units++;
                min_dec = 0;
                min_units = 0;
            }
            while (min_dec < 5)
                {
                if (min_units == 10)
                {
                    min_dec++;
                    min_units = 0;
                }
                
                while (min_units <= 9)
                    {
                       putchar(hour_dec + '0');
                       putchar(hour_units + '0');
                       putchar(':');
                       putchar(min_dec + '0');
                       putchar(min_units + '0');
                       min_units++;
                       putchar('\n');
                    }
            }
        }
    }
}
