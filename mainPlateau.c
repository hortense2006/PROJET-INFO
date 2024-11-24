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
int mainPlateau(int T,int S,int j,int p,int D)
{
    int posX1,posY1,posX2,posY2,posX3,posY3,posX4,posY4;

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

    // Initialisation de ncurses
    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);  // Couleur pour le joueur
    init_pair(2, COLOR_BLUE, COLOR_BLACK); // Couleur pour les barrières
    keypad(stdscr, TRUE);
    noecho();
    curs_set(FALSE);



    // Ajout d'une barrière pour tester
    placeBarrier(plateau, 1, 1, d);
    placeBarrier(plateau, 3, 3, d);

    // Boucle de jeu
    while ((ch = getch()) != 'q') { // Appuyer sur 'q' pour quitter
        int newX = playerX, newY = playerY;

        switch (ch) {
            case KEY_UP:
                newX -= 2; // Se déplacer vers le haut
                break;
            case KEY_DOWN:
                newX += 2; // Se déplacer vers le bas
                break;
            case KEY_LEFT:
                newY -= 2; // Se déplacer à gauche
                break;
            case KEY_RIGHT:
                newY += 2; // Se déplacer à droite
                break;
        }

        // Vérifie si le déplacement est possible
        if (canMove(plateau, newX, newY)) {
            playerX = newX;
            playerY = newY;
        }

        // Affiche le plateau mis à jour
        affichagePlateau(plateau, playerX, playerY);
    }
    return 0;
}



