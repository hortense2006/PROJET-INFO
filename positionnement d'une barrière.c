//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include <windows.h>
int barriere() {

    // DEFINITION DES VARIABLES
    int nbbarrieres, nbbarrieres_total;
    int verticale;
    int horizontale;
    int chiffre3, chiffreg, chiffreh;
    if (nbjoueurs == 2) {
      nbbarrieres_total = 20;
      joueur = (nbbarrieres_total)/2;
    }
    if (nbjoueurs == 4) {
      nbbarrieres_total = 20;
      joueur = (nbbarrieres_total)/4;
    }
    // EST-CE-QUE C'EST POSSIBLE
    if (nbbarrieres != 0) {
        printf("Vous pouvez placer une barriere.\n");
    while (nbbarrieres != 0) {
    // PRESENTATION DES OPTIONS DE DEPLACEMENT
        printf("Vous  pouvez poser une barriere de 2 manieres:\n");
        printf("1 = La barriere est a l'horizontale\n",horizontale);
        printf("2 = La barriere est a la verticale\n",verticale);

        // CHOISIR UN CHIFFRE RELIE A UNE OPTION DE DEPLACEMENT
        printf("Selectionner un chiffre entre 1 et 2 :\n");
        scanf("%d",&chiffre3);

        // DETERMINER L'OPTION CHOISIE EN FONCTION DU CHIFFRE SAISI
        switch (chiffre3) {
            case 1: {
                printf("Voulez-vous poser votre barriere a l'horizontale ?\n");
                printf("1 = Oui\n");
                printf("2 = Non\n");
                printf("Selectionner soit 1 soit 2 :\n");
                scanf("%d",&chiffreg);
                switch (chiffreg) {
                  case 1: {
                    qf
                    // POSITIONNEMENT DE LA BARRIERE A L'AIDE DU CURSEUR
                    void gotoligcol(int lig1,int col1){
                       int lig1,col1;
                      // RESSOURCES
                        COORD mycoord;
                        mycoord.X =col1;
                        mycoord.Y = lig1;
                        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord);
                    }
                    break;
                    }
                  case 2: {
                    fdg
                    break;
                  }
                    default:{
                      printf("Erreur!\n");
                      break;
                    }
                }
            }
            case 2: {
                printf("Voulez-vous poser votre barriere a la verticale ?\n");
                printf("1 = Oui\n");
                printf("2 = Non\n");
                printf("Selectionner soit 1 soit 2 :\n");
                scanf("%d",&chiffreh);
                switch (chiffreh) {
                  case 1: {
                    fd
                   // POSITIONNEMENT DE LA BARRIERE A L'AIDE DU CURSEUR
                     void gotoligcol(int lig2,int col2){
                          int lig2,col2;
                      // RESSOURCES
                          COORD mycoord;
                          mycoord.X =col2;
                          mycoord.Y = lig2;
                          SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord);
                     }
                    break;
                  }
                  case 2: {
                     dd
                     break;
                  }
                    default:{
                      printf("Erreur!\n");
                      break;
                    }
                }

            }
            default: {
                printf("Erreur\n");
            }
        }
    }

    }
    else
        printf("Vous n'avez plus de barrieres.\n");
    options();
    return 0;
}
#include "positionnement d'une barrière.h"
