#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "mainPlateau.h"
#include "freeplateau.h"
#include "createplateau.h"
#include "placementbarrière.h"
#include "affichagePlateau.h"
#include "placementPion.h"
#include "NEOS.h"

#define EMPTY 0
#define PLAYER_BASE 10
#define BARRIER_BASE 100

// Ajoute et modification d'un pion à la matrice
void placementPion(Plateau *plateau, int x, int y, char AM, int J, char D);
{
    if (x % 2 == 0 && y % 2== 0)
    {
        //Direction
        switch(AM)
        {
            case "A":
            {
                plateau->grille[x][y] = PLAYER_BASE + J;
                return plateau;
                break;
            }
            break;
            case "M":
            {
                //Direction
                switch(D)
                {
                    //Placement de la position en fonction de la direction souhaiter
                    case "N":
                    {
                        if (plateau->grille[x][y + 1] >= BARRIER_BASE || plateau->grille[x][y + 1] == "\0" )
                        {
                            printf("Vous ne pouvez pas aller dans cette direction\n")
                            return plateau;
                        }
                        if else (plateau->grille[x][y + 2] == EMPTY))
                        {
                            plateau->grille[x][y] = EMPTY;
                            plateau->grille[x][y + 2] = PLAYER_BASE + J;
                            return plateau;
                        }
                        if else (plateau->grille[x][y + 3] == EMPTY && plateau->grille[x][y + 3] != "\0"))
                        {
                            plateau->grille[x][y] = EMPTY;
                            plateau->grille[x][y + 4] = PLAYER_BASE + J;
                            return plateau;
                        }
                        break;
                    }
                    case "E":
                    {
                        if (plateau->grille[x + 1][y] >= BARRIER_BASE || plateau->grille[x + 1][y] == "\0" )
                        {
                            printf("Vous ne pouvez pas aller dans cette direction\n")
                            return plateau;
                        }
                        if else (plateau->grille[x + 2][y] == EMPTY))
                        {
                            plateau->grille[x][y] = EMPTY;
                            plateau->grille[x + 2][y] = PLAYER_BASE + J;
                            return plateau;
                        }
                        if else (plateau->grille[x + 3][y] == EMPTY && plateau->grille[x + 3][y] != "\0"))
                        {
                            plateau->grille[x][y] = EMPTY;
                            plateau->grille[x + 4][y] = PLAYER_BASE + J;
                            return plateau;
                        }
                        break;
                    }
                    case "S":
                    {
                        if (plateau->grille[x - 1][y] >= BARRIER_BASE || plateau->grille[x - 1][y] == "\0")
                        {
                            printf("Vous ne pouvez pas aller dans cette direction\n")
                            return plateau;
                        }
                        if else (plateau->grille[x - 2][y] == EMPTY))
                        {
                            plateau->grille[x][y] = EMPTY;
                            plateau->grille[x - 2][y] = PLAYER_BASE + J;
                            return plateau;
                        }
                        if else (plateau->grille[x - 3][y] == EMPTY && plateau->grille[x - 3][y] != "\0")
                        }
                            plateau->grille[x][y] = EMPTY;
                            plateau->grille[x - 4][y] = PLAYER_BASE + J;
                            return plateau;
                        }
                        break;
                    }
                    case "O":
                    {
                        if (plateau->grille[x][y - 1] >= BARRIER_BASE || plateau->grille[x][y - 1] == "\0" )
                        {
                            printf("Vous ne pouvez pas aller dans cette direction\n")
                            return plateau;
                        }
                        if else (plateau->grille[x][y - 2] == EMPTY))
                        {
                            plateau->grille[x][y] = EMPTY;
                            plateau->grille[x][y - 2] = PLAYER_BASE + J;
                            return plateau;
                        }
                        if else (plateau->grille[x][y - 3] == EMPTY && plateau->grille[x][y - 3] != "\0"))
                        {
                            plateau->grille[x][y] = EMPTY;
                            plateau->grille[x][y - 4] = PLAYER_BASE + J;
                            return plateau;
                        }
                        break;
                    }
                    break;
                }
                break;
            }
            break;
        }
    }
    else
    {
        printf("Coordonné non valide.\n");
        return 0;
    }
}


