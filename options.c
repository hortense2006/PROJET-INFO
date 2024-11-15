//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include <pion.h>
#include <barriere.h>
#include <annuler.h>
#include <passer.h>
int options()
{
    // DEFINITION DES VARIABLES
    int options;
    int deplacer_le_pion =1 ;
    int poser_une_barriere = 2;
    int passer = 3;
    int annuler = 4;
    int chiffre1, chiffrec, chiffred, chiffree, chiffref;

    // PRESENTATION DES OPTIONS DE JEU
    printf("Voici vos options de jeu\n",options);
    printf("1= Deplacer votre pion\n", deplacer_le_pion);
    printf("2= Poser une barriere\n",poser_une_barriere);
    printf("3= Passer votre tour\n",passer);
    printf("4= Annuler votre coup precedent\n",annuler);

    // CHOISIR UN CHIFFRE RELIE A UNE OPTION DE JEU
    printf("Selectionner un chiffre entre 1 et 4 :",chiffre1);
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
                barrieres();
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

#include "options.h"
