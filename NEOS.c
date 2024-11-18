#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include "NEOS.h"

int NEOS(int posX, int posY, int D);
{
    //Direction
    switch(D)
    {
        //Modification de la position en fonction de la direction souhaiter
        case 1:
        {
            posY= posY+1;
            break;
        }
        case 2:
        {
            posX= posX-1;
            break;
        }
        case 3:
        {
            posX= posX+1;
            break;
        }
        case 4:
        {
            posY= posY-1;
            break;
        }
    }
    return posX,posY
}