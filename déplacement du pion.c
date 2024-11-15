//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include <windows.h>
int pion() {
    // DEFINITION DES VARIABLES
    int gauche  = 1;
    int droite = 2;
    int devant = 3;
    int derriere = 4;
    int chiffre2;
    // PRESENTATION DES OPTIONS
    printf("Vous pouvez deplacer votre pion de 4 manieres :\n");

    printf("1 = Aller vers la gauche.\n",gauche);
    printf("2 = Aller vers la droite\n",droite);
    printf("3 = Avancer d'une case.\n",devant);
    printf("4 = Reculer d'une case.\n",derriere);

    // CHOIX D'UN CHIFFRE RELIE A UNE OPTION DE DEPLACEMENT

    printf("Selectionner un chiffre entre 1 et 4:",chiffre2);
    scanf("%d",&chiffre2);

    // SAISIR LES COORDONNEES DE LA NOUVELLE CASE + DIRE SI LE DEPLACEMENT EST POSSIBLE OU NON
    switch (chiffre2) {
        case 1: {
            printf("Vous allez d'une case vers la gauche.\n");

        }
        case 2: {
            printf("Vous allez d'une case vers la droite.\n");
        }
        case 3: {
            printf("Vous avancez d'une case.\n");
        }
        case 4: {
            printf("Vous reculez d'une case.\n");
        }
        default: {
            printf("Erreur.\n");
        }
    }
    return 0;
}

#include "deplacement du pion.h"
void gotoligcol(int lig2,int col2);
int lig2,col2;
// RESSOURCES
COORD mycoord;
mycoord.X =col2;
mycoord.Y = lig2;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord);

#include "déplacement du pion.h"
