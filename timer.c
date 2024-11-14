#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int timer(int Tmax)
{
    int sec = 0, min = 0;
    while (min <= Tmax)
        {
        sec += 1;
        if (sec 60)
        {
            sec = 0;
            min = min + 1;
        }
        sleep(1);
        printf("%d:%d"min,sec);
    }
    return "timer_end";
}