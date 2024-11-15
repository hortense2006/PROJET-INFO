#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int sec = 0, min = 0;
int timer(int Tmax,ON,R,*sec,*min)
{
    if (ON == 1)
    {
        while (&min <= Tmax)
        {
            printf("%d:%d" &min,&sec);
            &sec += 1;
            if (&sec == 60)
            {
                &sec = 0;
                &min = &min + 1;
            }
        sleep(1);
        }
    }
    if (R == 1)
    {
      &sec = 0, &min = 0;
    }
    return "timer_end";
}