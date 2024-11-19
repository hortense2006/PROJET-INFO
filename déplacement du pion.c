//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include "déplacement du pion.h"

int pion() {
    // DEFINITION DES VARIABLES
    int chiffre2,position_x,position_y;

    /* PRESENTATION DES OPTIONS*/
    printf("Vous pouvez deplacer votre pion de 4 manieres :\n");

    printf("1 = Aller vers la gauche.           2. Aller vers la droite.\n");
    printf("3 = Avancer d'une case.              4 = Reculer d'une case.\n");

    /* CHOIX D'UN CHIFFRE RELIE A UNE OPTION DE DEPLACEMENT*/

    printf("Selectionner un chiffre entre 1 et 4:");
    scanf("%d",&chiffre2);
    switch (chiffre2) {
        case 1: {
          printf("Voulez-vous aller d'une case vers la gauche ?\n");
          printf("1 = Oui.                  2 = Non\n");
          printf("Selectionner soit 1 soit 2:\n");
          scanf("%d",&chiffre2);
          switch (chiffre2) {
            case 1: {
              position_x = position_x - 1;
              /* VERIFIER SI LE MOUVEMENT EST POSSIBLE*/
              if (position_x !='\0') {
                printf("Cette case est déjà occupee.\n");
                if (position_y + 1 !='\0'|| position_y - 1 !='\0') {
                  printf("Cette case est occupee par une barriere.\n");
                }
                else {
                  // PASSER AU DESSUS DU PION
                  position_x = position_x - 2;
                }
              }
              else{
                printf("Votre choix est enregistre.\n");
              }
              break;
            }
            default: {
              pion();
              break;
            }
          }
        }
        case 2: {
            printf("Voulez-vous aller d'une case vers la droite ?\n");
            printf("1 = Oui.                     2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffre2);
            switch (chiffre2) {
              case 1: {
                position_x = position_x + 1;

                /* VERIFIER SI LE MOUVEMENT EST POSSIBLE*/
                if (position_x !='\0') {
                  printf("Cette case est déjà occupee.\n");
                  if (position_y + 1 !='\0'|| position_y - 1 !='\0') {
                    printf("Cette case est occupee par une barriere.\n");
                  }
                  else {
                    // PASSER AU DESSUS DU PION
                    position_x = position_x + 2;
                  }
                }
                else{
                  printf("Votre choix est enregistre.\n");
                }
                break;
              }
              default: {
                pion();
                break;
              }
            }
        }
        case 3: {
            printf("Voulez-vous avancer d'une case ?\n");
            printf("1 = Oui.               2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffre2);
            switch (chiffre2) {
              case 1: {
              position_y = position_y + 1;

                /* VERIFIER SI LE MOUVEMENT EST POSSIBLE*/
                if (position_y !='\0') {
                  printf("Cette case est déjà occupee.\n");
                  if (position_x + 1 !='\0'|| position_x - 1 !='\0') {
                    printf("Cette case est occupee par une barriere.\n");
                  }
                  else {
                    // PASSER AU DESSUS DU PION
                    position_y = position_y + 2;
                  }
                }
                else{
                    printf("Votre choix est enregistre.\n");
                }
              break;
              }
              default: {
                pion();
                break;
              }
            }
        }
        case 4: {
            printf("Voulez-vous reculer d'une case ?\n");
            printf("1 = Oui.           2 = Non.\n");
            printf("2 = Non\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffre2);
            switch (chiffre2) {
              case 1: {
              position_y = position_y - 1;
                /* VERIFIER SI LE MOUVEMENT EST POSSIBLE*/
                if (position_y !='\0') {
                  printf("Cette case est déjà occupee.\n");
                  if (position_x + 1 !='\0'|| position_x - 1 !='\0') {
                    printf("Cette case est occupee par une barriere.\n");
                  }
                  else {
                    // PASSER AU DESSUS DU PION
                    position_y = position_y - 2;
                  }
                }
                else{
                  printf("Votre choix est enregistre.\n");
                }
                break;
              }
              default: {
                pion();
                break;
              }
            }
          break;
        }
        default: {
            printf("Erreur.\n");
        }
    }
    return 0;
}

