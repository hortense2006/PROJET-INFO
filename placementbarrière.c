#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "mainPlateau.h"
#include "freeplateau.h"
#include "createplateau.h"
#include "placementbarrière.h"
#include "affichagePlateau.h"
#include "NEOS.h"

#define EMPTY 0
#define PLAYER_BASE 10
#define BARRIER_BASE 100

// Ajoute une barrière à la matrice
int placementBarrier(Plateau *plateau, int x, int y, char D, int nB, int J)
{
    if (x % 2 == 1 && y % 2 == 1 && x < plateau->taille - 1 && y < plateau->taille - 1)
    {
        //Direction
        switch(D)
        {
            //Placement de la position en fonction de la direction souhaiter
            case "N":
            {
                if (plateau->grille[x][y] == EMPTY && plateau->grille[x][y + 1] == EMPTY)
                {
                    plateau->grille[x][y] = BARRIER_BASE*J +nB-1;
                    plateau->grille[x][y + 1] = BARRIER_BASE*J +nB-1;
                    return plateau;
                }
                else
                {
                    printf("Case déja prise\n");
                    return 0;
                }
                break;
            }
            case "E":
            {
                if (plateau->grille[x][y] == EMPTY && plateau->grille[x + 1][y] == EMPTY)
                {
                    plateau->grille[x][y] = BARRIER_BASE*J +nB-1;
                    plateau->grille[x + 1][y] = BARRIER_BASE*J +nB-1;
                    return plateau;
                }
                else
                {
                    printf("Case déja prise\n");
                    return 0;
                }
                break;
            }
            case "S":
            {
                if (plateau->grille[x][y] == EMPTY && plateau->grille[x - 1][y] == EMPTY)
                {
                    plateau->grille[x][y] = BARRIER_BASE*J +nB-1;
                    plateau->grille[x - 1][y] = BARRIER_BASE*J +nB-1;
                    return plateau;
                }
                else
                {
                    printf("Case déja prise\n");
                    return 0;
                }
                break;
            }
            case "O":
            {
                if (plateau->grille[x][y] == EMPTY && plateau->grille[x][y - 1] == EMPTY)
                {
                    plateau->grille[x][y] = BARRIER_BASE*J +nB-1;
                    plateau->grille[x][y - 1] = BARRIER_BASE*J +nB-1;
                    return plateau;
                }
                else
                {
                    printf("Case déja prise\n");
                    return 0;
                }
                break;
            }
            break;
        }
    }
    else
    {
        printf("Coordonné d'origine non valide.\n");
        return 0;
    }
}