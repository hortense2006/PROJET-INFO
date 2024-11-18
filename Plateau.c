#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include "Plateau.h"
#include "NEOS.h"

int plateau(int T,int S,int j,int p,int D)
{
    // Taile   Start    Joueur    pion    Direction
    int posX1,posY1,posX2,posY2,posX3,posY3,posX4,posY4;
    if(T==9)
    {
        char plateauJ[9][9];
        char plateauB[9][9];
        if(S==1)
        {
            if(j==2)
            {
                posX1=0,posY1=4;
                posX2=9,posY2=4;
            }
            if(j==4)
            {
                posX1=0,posY1=4;
                posX2=4,posY2=8;
                posX3=4,posY3=0;
                posX4=9,posY4=4;
            }
        }
    }
    if(T==12)
    {
        char plateauJ[12][12];
        char plateauB[12][12];
        if(S==1)
        {
            if(j==2)
            {
                posX1=0,posY1=5;
                posX2=11,posY2=6;
            }
            if(j==4)
            {
                posX1=0,posY1=5;
                posX2=5,posY2=11;
                posX3=11,posY3=6;
                posX4=6,posY4=0;
            }
        }
    }
    if(S==0)
    {
        switch(p)
        {
            case 1:
            {
                NOES(posX1,posY1,D);
                break;
            }
            case 2:
            {
                NOES(posX2,posY2,D);
                break;
            }
            case 3:
            {
                NOES(posX3,posY3,D);
                break;
            }
            case 4:
            {
                NOES(posX4,posY4,D);
                break;
            }
        }
    }
}