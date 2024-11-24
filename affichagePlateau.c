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

// Affiche le plateau avec ncurses
void affichagePlateau(Plateau *plateau, int playerX, int playerY)
{
    clear();
    for (int i = 0; i < plateau->taille; i++)
    // plateau -> taille associe la taille définie par le joueur du plateau à la variable plateau.
    {
        for (int j = 0; j < plateau->taille; j++)
        {
            if (plateau->grille[i][j] >= PLAYER_BASE)
            {
                attron(COLOR_PAIR(1)); // Couleur du joueur
                mvprintw(i, j * 2, "P");
                attroff(COLOR_PAIR(1));
            }
            else if (plateau->grille[i][j] == EMPTY)
            {
                mvprintw(i, j * 2, "  ");
            }
            else if (plateau->grille[i][j] >= BARRIER_BASE)
            {
                attron(COLOR_PAIR(2)); // Couleur des barrières
                mvprintw(i, j * 2, "B");
                attroff(COLOR_PAIR(2));
            }
        }
    }
    refresh();
}