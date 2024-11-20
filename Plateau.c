#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include "Plateau.h"
#include "NEOS.h"

// Taile   Start    Joueur    pion    Direction
int plateau(int T,int S,int j,int p,int D)
{
    int posX1,posY1,posX2,posY2,posX3,posY3,posX4,posY4;

    //Taille plateau
    if(T==9)
    {
        char plateauJ[9][9];
        char plateauB[11][11];

        //Si premier tour donc START, initialisation des pions
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

    //Taille plateau
    if(T==12)
    {
        char plateauJ[12][12];
        char plateauB[14][14];

        //Si premier tour donc START, initialisation des pions
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

    //Si non le premier tour donc START=0/NULL
    if(S==0)
    {
        //ON modifie la position du point en fonction du joueur et de la direction souhaiter
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

    //Affichage des tableaux
    for(i=T;i>=0;i=i-1)
    {
        for(j=0-T;j>=0;j=j-1)
        {
            printf("%c",plateauB[j][i]);
            printf("%c",plateauJ[j][i]);
        }
    }
}