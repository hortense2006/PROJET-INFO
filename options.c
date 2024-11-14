//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
int options()
{
    // DEFINITION DES VARIABLES
    int options;
    int deplacer_le_pion =1 ;
    int poser_une_barriere = 2;
    int passer = 3;
    int annuler = 4;
    int chiffre1;

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
            printf("Vous souhaitez déplacer votre pion.\n");
            int pion();
        }
        case 2: {
            printf("Vous souhaitez poser une barriere.\n");
            int barrieres();
        }
        case 3: {
            printf("Vous souhaitez passer votre tour.\n");
            int passer();
        }
        case 4: {
            printf("Vous souhaitez annuler votre coup precedent.\n");
            int annuler();
        }
        default : {
            printf("Erreur\n");
        }
    }
    return 0;
}

#include "options.h"
