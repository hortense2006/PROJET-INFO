//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include "blocage d'un pion.h"
#include "options.h"
#include "positionnement d'une barrière.h"
#define MAX taille_plateau_max
#define MIN taille_plateau_min
int barriere() {

    /*DEFINITION DES VARIABLES*/
    int nbbarrieres;
    int nbbarrieres_total;
    int taille_du_plateau;
    int nbjoueurs;
    int verticale;
    int horizontale;
    int chiffre3, chiffreg, chiffreh;
    int ligne_1,ligne_2, colonne_1,colonne_2;

    /* NOMBRE DE BARRIERES TOTALES EN FONCTION DU PLATEAU*/
    if (taille_du_plateau = MAX) {
      nbbarrieres_total = 40;
    }
    if (taille_du_plateau = MIN) {
         nbbarrieres_total = 20;
    }

    /* NOMBRE DE BARRIERES*/
    if (nbjoueurs == 2) {
      nbbarrieres = nbbarrieres_total/2;
    }
    if (nbjoueurs == 4) {
      nbbarrieres = nbbarrieres_total/4;
    }

    /* EST-CE-QUE C'EST POSSIBLE*/
    if (nbbarrieres != 0) {
      printf("Vous pouvez placer une barriere.\n");
      while (nbbarrieres != 0) {
        /* PRESENTATION DES OPTIONS DE DEPLACEMENT*/
        printf("Vous  pouvez poser une barriere de 2 manieres:\n");
        printf("1 = La barriere est a l'horizontale\n",horizontale);
        printf("2 = La barriere est a la verticale\n",verticale);

        /* CHOISIR UN CHIFFRE RELIE A UNE OPTION DE DEPLACEMENT*/
        printf("Selectionner un chiffre entre 1 et 2 :\n");
        scanf("%d",&chiffre3);

        /* DETERMINER L'OPTION CHOISIE EN FONCTION DU CHIFFRE SAISI*/
        switch (chiffre3) {
          case 1: {
            printf("Voulez-vous poser votre barriere a l'horizontale ?\n");
            printf("1 = Oui\n");
            printf("2 = Non\n");
            printf("Selectionner soit 1 soit 2 :\n");
            scanf("%d",&chiffreg);
            switch (chiffreg) {
              case 1: {
                // POSITIONNEMENT DE LA BARRIERE A L'AIDE DU CURSEUR
                printf("Saisissez les nouvelles coordonnees x et y du pion:\n");
                scanf("%d""%d""%d",&ligne_1,&colonne_1,&colonne_2);

                /* VERIFIER SI LE MOUVEMENT EST POSSIBLE*/
                if (ligne_1 !='\n'&& (colonne_1 !='\n'|| colonne_2 != '\n')) {
                  printf("Cet emplacement est déjà occupe.\n");
                  barriere();
                }
                else{
                  printf("Votre choix est enregistre.\n");
                  nbbarrieres = nbbarrieres -1;
                }

                /* VERIFIER QUE LA BARRIERE NE BLOQUE PAS LE PION ADVERSE*/
                if (/*LA BARRIERE EST A COTE D'UN PION*/){
                  bloque();
                }
                else {
                  printf("Votre choix est enregistre.\n");
                }
                break;
              }
              case 2: {
                options();
                break;
              }
              default:{
                printf("Erreur!\n");
                options();
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
                // POSITIONNEMENT DE LA BARRIERE A L'AIDE DU CURSEUR
                printf("Saisissez les nouvelles coordonnees x et y du pion:\n");
                scanf("%d""%d""%d",&ligne_1,&ligne_2,&colonne_1);

                /* VERIFIER SI LE MOUVEMENT EST POSSIBLE*/
                if (colonne_1 !='\n'&& (ligne_1 !='\n'|| ligne_2 != '\n')) {
                  printf("Cet emplacement est déjà occupe.\n");
                  barriere();
                }
                else{
                  printf("Votre choix est enregistre.\n");
                  nbbarrieres = nbbarrieres - 1;
                  bloque();
                }
                break;
              }
              case 2: {
                options();
                break;
              }
              default:{
                printf("Erreur!\n");
                options();
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
    else{
        printf("Vous n'avez plus de barrieres.\n");
        options();
    }
    return 0;
}

