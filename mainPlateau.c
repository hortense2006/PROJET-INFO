#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "mainPlateau.h"
#include "freeplateau.h"
#include "createplateau.h"
#include "placementbarrière.h"
#include "affichagePlateau.h"
#include "NEOS.h"


// Taille par défaut du plateau
#define TPlat1 16
#define TPlat2 22

#define EMPTY 0
#define PLAYER_BASE 10
#define BARRIER_BASE 100


// Taile   Start    Joueur    pion    Direction
int mainPlateau(int T,int S,int j,int p,int D, char BP)
{


    //Taille plateau
    if(T==TPlat1)
    {
        //Si premier tour donc START, initialisation des pions
        if(S==1)
        {
            // Création du plateau
            Plateau *plateau = createPlateau(TPlat1);

            if(j==2)
            {
                placementBarrier(Plateau *plateau,0,8,A,0,N)
                placementBarrier(Plateau *plateau,16,8,A,1,N)
            }
            if(j==4)
            {
                placementBarrier(Plateau *plateau,0,8,A,0,N)
                placementBarrier(Plateau *plateau,8,16,A,1,N)
                placementBarrier(Plateau *plateau,16,8,A,2,N)
                placementBarrier(Plateau *plateau,8,0,A,3,N)
            }
        }
    }

    //Taille plateau
    if(T==TPlat2)
    {
        //Si premier tour donc START, initialisation des pions
        if(S==1)
        {
            // Création du plateau
            Plateau *plateau = createPlateau(TPlat2);

            if(j==2)
            {
                placementBarrier(Plateau *plateau,0,11,A,0,N)
                placementBarrier(Plateau *plateau,22,11,A,1,N)
            }
            if(j==4)
            {
                placementBarrier(Plateau *plateau,0,11,A,0,N)
                placementBarrier(Plateau *plateau,11,22,A,1,N)
                placementBarrier(Plateau *plateau,22,11,A,2,N)
                placementBarrier(Plateau *plateau,11,0,A,3,N)
            }
        }
    }

    if(S==0)
    {
        switch(BP)
        {
            case 'B':
            {
                printf("A quelle coordonné x et y voulez vous\n");
                placementBarrier(Plateau *plateau, int x, int y, char D, int nB, int J)
            }
            break;
        }
    }
        // Affiche le plateau mis à jour
        affichagePlateau(plateau, playerX, playerY);
    }
    return 0;
}



