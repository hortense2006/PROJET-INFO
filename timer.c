#include <stdio.h>
#include <unistd.h>

int timer(int Mmax,int Smax,int ON)
{
    int sec = 0, min = 0;
    if (ON == 1)
    {
        while (min <= Mmax && sec <= Smax)
        {
            printf("%d:%d",min,sec);
            sleep(1);
            sec += 1;
            if (sec == 60)
            {
                sec = 0;
                min = min + 1;
            }
        }
        printf("Votre temps pour ce tour est écoulé.");
        return 0;
    }
}