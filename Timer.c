#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int timer(int Mmax, int Smax, int ON)
{
    int sec = 0, min = 0;
    if (ON == 1)
    {
        while (min <= Mmax && sec <= Smax)
        {
            printf("%d:%d" min,sec);
            sleep(1);
            sec += 1;
            if (sec == 60)
            {
                sec = 0;
                min = min + 1;
            }
        }
    }
    if (ON == 1, min == Mmax && sec == Smax)
    {
      printf("\n\nVotre est fini pour ce tour.");
      return 0;
    }
}