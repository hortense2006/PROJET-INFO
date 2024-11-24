#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "mainPlateau.h"
#include "freeplateau.h"
#include "createplateau.h"
#include "placementbarrière.h"
#include "affichagePlateau.h"
#include "placementPion.h"

// Ajoute et modification d'un pion à la matrice
void placementPion(Plateau *plateau, int x, int y, int AM, char D)
{
    if (x % 2 == 0 && y % 2== 0 && x < plateau->taille - 1 && y < plateau->taille - 1)
    {
        //Direction
        switch(D)
        {
            //Placement de la position en fonction de la direction souhaiter
            case 1:
            {
                plateau->grille[x][y] = BARRIER_BASE;
                plateau->grille[x][y + 1] = BARRIER_BASE
                break;
            }
            case 2:
            {
                plateau->grille[x][y] = BARRIER_BASE;
                plateau->grille[x + 1][y] = BARRIER_BASE
                break;
            }
            case 3:
            {
                plateau->grille[x][y] = BARRIER_BASE;
                plateau->grille[x - 1][y] = BARRIER_BASE
                break;
            }
            case 4:
            {
                plateau->grille[x][y] = BARRIER_BASE;
                plateau->grille[x][y - 1] = BARRIER_BASE
                break;
            }
        }
        break;
    }
}