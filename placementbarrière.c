#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "mainPlateau.h"
#include "freeplateau.h"
#include "createplateau.h"
#include "placementbarrière.h"
#include "affichagePlateau.h"

// Ajoute une barrière à la matrice
void placementBarrier(Plateau *plateau, int x, int y, char D)
{
    if (x % 2 == 1 && y % 2 == 1 && x < plateau->taille - 1 && y < plateau->taille - 1)
    {
        //Direction
        switch(D)
        {
            //Placement de la position en fonction de la direction souhaiter
            case "N":
            {
                plateau->grille[x][y] = BARRIER_BASE;
                plateau->grille[x][y + 1] = BARRIER_BASE
                break;
            }
            case "E":
            {
                plateau->grille[x][y] = BARRIER_BASE;
                plateau->grille[x + 1][y] = BARRIER_BASE
                break;
            }
            case "S":
            {
                plateau->grille[x][y] = BARRIER_BASE;
                plateau->grille[x - 1][y] = BARRIER_BASE
                break;
            }
            case "O":
            {
                plateau->grille[x][y] = BARRIER_BASE;
                plateau->grille[x][y - 1] = BARRIER_BASE
                break;
            }
        }
        break;
    }
}