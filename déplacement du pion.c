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
    switch (chiffre2) {
        case 1: {
            printf("Voulez-vous aller d'une case vers la gauche ?\n",gauche);
            printf("1 = Oui\n");
            printf("2 = Non\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&gauche);
            switch (gauche) {
              case 1: {
                if (COORD mycoord != 0){
                  void gotoligcol(int lig2,int col2){
                    int lig2,col2;
                     // RESSOURCES
                    COORD mycoord;
                    mycoord.X =col2;
                    mycoord.Y = lig2;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord);
                  }
                }
                else {
                  pion();
                }
                break;
              }
              case 2: {
                pion();
                break;
              }
              default: {
                printf("Erreur!\n");
                pion();
                break;
              }
            }
        case 2: {
            printf("Voulez-vous aller d'une case vers la droite ?\n");
            printf("1 = Oui\n");
            printf("2 = Non\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&droite);
            switch (droite) {
              case 1: {
                if (COORD mycoord !=1){
                  void gotoligcol(int lig2,int col2){
                    int lig2,col2;
                     // RESSOURCES
                    COORD mycoord;
                    mycoord.X =col2;
                    mycoord.Y = lig2;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord);
                  }
                }
                else {
                  pion();
                break;
              }
              case 2: {
                pion();
                break;
              }
              default: {
                printf("Erreur!\n");
                pion();
                break;
              }
            }
        }
        case 3: {
            printf("Voulez-vous avancer d'une case ?\n");
            printf("1 = Oui\n");
            printf("2 = Non\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&devant);
            switch (devant) {
              case 1: {
                if (COORD mycoord !=1){
                  void gotoligcol(int lig2,int col2){
                    int lig2,col2;
                     // RESSOURCES
                    COORD mycoord;
                    mycoord.X =col2;
                    mycoord.Y = lig2;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord);
                  }
                }
                else {
                  pion();
                break;
              }
              case 2: {
                pion();
                break;
              }
              default: {
                printf("Erreur!\n");
                pion();
                break;
              }
            }
        }
        case 4: {
            printf("Voulez-vous reculer d'une case ?\n");
            printf("1 = Oui\n");
            printf("2 = Non\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&derriere);
            switch (derriere) {
              case 1: {
                if (COORD mycoord !=1){
                  void gotoligcol(int lig2,int col2){
                    int lig2,col2;
                     // RESSOURCES
                    COORD mycoord;
                    mycoord.X =col2;
                    mycoord.Y = lig2;
                    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord);
                  }
                }
                else {
                  pion();
                break;
              }
              case 2: {
                pion();
                break;
              }
              default: {
                printf("Erreur!\n");
                pion();
                break;
              }
              break;
            }
        }
        default: {
            printf("Erreur.\n");
        }
    }
    return 0;
}
#include "déplacement du pion.h"
