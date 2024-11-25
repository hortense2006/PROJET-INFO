//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include "déplacement du pion.h"
#include "positionnement d'une barrière.h"
#include "annuler son tour.h"
#include "passer son tour.h"
#include "options.h"
#include "affichagePlateau.h"
int  options()
{
    // DEFINITION DES VARIABLES
    int pion = 1, barrieres = 2, passer = 3, annuler = 4, chiffre1, joueur;

    // PRESENTATION DES OPTIONS DE JEU
    printf("Voici vos options de jeu :\n");
    printf("1= Deplacer votre pion.                    2= Poser une barriere.\n");
    printf("3= Annuler votre coup precedent.            4= Passer votre tour.\n");

    // CHOISIR UN CHIFFRE RELIE A UNE OPTION DE JEU
    printf("Selectionner un chiffre entre 1 et 4 :");
    scanf("%d",&chiffre1);

    // DETERMINER L'OPTION CHOISIE EN FONCTION DU CHIFFRE SAISI
    switch (chiffre1) {
        case 1: {
            printf("Souhaitez-vous deplacer votre pion ?\n");
            printf("1= Oui.                  2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffre1);
          if (chiffre1 == 1) {
            printf("Vous voulez deplacer votre pion.\n");
              pion();
          }
          else {
            printf("Erreur!\n");
          }
        break;
        }
        case 2: {
            printf("Souhaitez-vous poser une barriere ?\n");
            printf("1= Oui.              2= Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffre1);
            if (chiffre1 == 1) {
                printf("Vous voulez poser une barriere.\n");
                barrieres(joueur -> nbbarriere, Plateau *plateau);
                // joueur ->nbbarriere = le nombre de barrières attribué au joueur.
                //Plateau *plateau fait appel au plateau tel qu'il est en cours de partie.
            }
            else {
                printf("Erreur!\n");
            }
        break;
        }
        case 3: {
            printf("Souhaitez-vous passer votre tour ?\n");
            printf("1= Oui.                  2= Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffre1);
            if (chiffre1 == 1) {
                printf("Vous vouler passer votre tour.\n");
                passer();
            }
            else {
                printf("Erreur!\n");
            }
        break;
        }
        case 4: {
            printf("Souhaitez-vous annuler votre coup precedent ?\n");
            printf("1= Oui.               2= Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffre1);
            if (chiffre1 == 1) {
                printf("Vous vouler annuler votre tour precedent.\n");
                annuler();
            }
            else {
                printf("Erreur!\n");
            }
        }
        default : {
            printf("Erreur\n");
            break;
        }
    }
    return 0;
}


