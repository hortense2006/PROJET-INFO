#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "mainPlateau.h"
#include "freeplateau.h"
#include "createplateau.h"
#include "placementbarrière.h"
#include "affichagePlateau.h"



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
                posX1=0,posY1=8;
                posX2=16,posY2=8;
                posX3=100,posY3=100;
                posX4=100,posY4=100;
            }
            if(j==4)
            {
                posX1=0,posY1=8;
                posX2=8,posY2=16;
                posX3=16,posY3=8;
                posX4=8,posY4=0;
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
                posX1=0,posY1=11;
                posX2=22,posY2=11;
            }
            if(j==4)
            {
                posX1=0,posY1=11;
                posX2=11,posY2=22;
                posX3=22,posY3=11;
                posX4=11,posY4=0;
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
    placeBarrier(plateau, 1, 1, 'H');
    placeBarrier(plateau, 3, 3, 'V');

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