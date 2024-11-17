//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include "déplacement du pion.h"
#include "positionnement d'une barrière.h"
#include "annuler son tour.h"
#include "passer son tour.h"
#include "options.h"
int  options()
{
    // DEFINITION DES VARIABLES
    int options;
    int pion = 1 ;
    int barriere = 2;
    int passer = 3;
    int annuler = 4;
    int chiffre1, chiffrec, chiffred, chiffree, chiffref;

    // PRESENTATION DES OPTIONS DE JEU
    printf("Voici vos options de jeu\n");
    printf("1= Deplacer votre pion\n");
    printf("2= Poser une barriere\n");
    printf("3= Passer votre tour\n");
    printf("4= Annuler votre coup precedent\n");

    // CHOISIR UN CHIFFRE RELIE A UNE OPTION DE JEU
    printf("Selectionner un chiffre entre 1 et 4 :");
    scanf("%d",&chiffre1);

    // DETERMINER L'OPTION CHOISIE EN FONCTION DU CHIFFRE SAISI
    switch (chiffre1) {
        case 1: {
            printf("Souhaitez-vous deplacer votre pion ?\n");
            printf("1= Oui.\n");
            printf("2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffrec);
            switch (chiffrec) {
              case 1: {
                pion();
                break;
              }
              case 2: {
                options();
                break;
              }
                default: {
                  printf("Erreur!\n");
                  options();
                  break;
                }
            }
        }
        case 2: {
            printf("Souhaitez-vous poser une barriere ?\n");
            printf("1= Oui.\n");
            printf("2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffred);
            switch (chiffred) {
              case 1: {
                barriere();
                break;
              }
              case 2: {
                options();
                break;
              }
              default: {
                options();
                break;
              }
            }
        }
        case 3: {
            printf("Souhaitez-vous passer votre tour ?\n");
            printf("1= Oui.\n");
            printf("2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffree);
            switch (chiffree) {
              case 1: {
                passer();
                break;
              }
              case 2: {
                 options();
                 break;
              }
              default: {
                printf("Erreur!\n");
                 options();
                 break;
              }
            }
        }
        case 4: {
            printf("Souhaitez-vous annuler votre coup precedent ?\n");
            printf("1= Oui.\n");
            printf("2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffref);
            switch (chiffref) {
              case 1: {
                annuler();
                break;
              }
              case 2: {
                 options();
                 break;
              }
              default: {
                printf("Erreur!\n");
                options();
                break;
              }
            }
        }
        default : {
            printf("Erreur\n");
            options();
            break;
        }
    }
    return 0;
}

