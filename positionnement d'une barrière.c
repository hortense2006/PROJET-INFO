//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include "blocage d'un pion.h"
#include "options.h"
#include "positionnement d'une barrière.h"
#define MAX plateau[12][12]
#define MIN plateau[9][9]
int barriere() {

    /*DEFINITION DES VARIABLES*/
    int nbbarrieres,nbbarrieres_total;
    int nbjoueurs, taille_du_plateau ;
    int chiffre3;
    int ligne_1,ligne_2, colonne_1,colonne_2;

    /* NOMBRE DE BARRIERES TOTALES EN FONCTION DU PLATEAU*/
    if (taille_du_plateau == MAX) {
      nbbarrieres_total = 40;
    }
    if (taille_du_plateau == MIN) {
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
        printf("1 = La barriere est a l'horizontale.            2 = La barriere est a la verticale.\n");

        /* CHOISIR UN CHIFFRE RELIE A UNE OPTION DE DEPLACEMENT*/
        printf("Selectionner un chiffre entre 1 et 2 :\n");
        scanf("%d",&chiffre3);

        /* DETERMINER L'OPTION CHOISIE EN FONCTION DU CHIFFRE SAISI*/
        switch (chiffre3) {
          case 1: {
            printf("Voulez-vous poser votre barriere a l'horizontale ?\n");
            printf("1 = Oui.                   2 = Non.\n");
            printf("Selectionner soit 1 soit 2 :\n");
            scanf("%d",&chiffre3);
            switch (chiffre3) {
              case 1: {
                // POSITIONNEMENT DE LA BARRIERE
                printf("Saisissez les coordonnees de la ligne et des deux colonnes de la barriere:\n");
                scanf("%d""%d""%d",&ligne_1,&colonne_1,&colonne_2);

                /* VERIFIER SI LE MOUVEMENT EST POSSIBLE*/
                if (ligne_1 !='\0'&& (colonne_1 !='\0'|| colonne_2 != '\0')) {
                  printf("Cet emplacement est déjà occupe.\n");
                  barriere();
                }
                else{
                  printf("Votre choix est enregistre.\n");
                  nbbarrieres = nbbarrieres -1;
                }

                /* VERIFIER QUE LA BARRIERE NE BLOQUE PAS LE PION ADVERSE*/
                if (colonne_1 + 1 != '\0'|| colonne_1 - 1 != '\0' || colonne_2 + 1 != '\0'|| colonne_2 - 1 != '\0') {
                  bloque();
                }
                else {
                  printf("Votre choix est enregistre.\n");
                }
                break;
              }
              default:{
                options();
                break;
              }
            }
          }
          case 2: {
            printf("Voulez-vous poser votre barriere a la verticale ?\n");
            printf("1 = Oui.                       2 = Non.\n");
            printf("Selectionner soit 1 soit 2 :\n");
            scanf("%d",&chiffre3);
            switch (chiffre3) {
              case 1: {
                // POSITIONNEMENT DE LA BARRIERE A L'AIDE DU CURSEUR
                printf("Saisissez les nouvelles coordonnees de la colonne et des deux lignes de la barriere:\n");
                scanf("%d""%d""%d",&ligne_1,&ligne_2,&colonne_1);

                /* VERIFIER SI LE MOUVEMENT EST POSSIBLE*/
                if (colonne_1 !='\0'&& (ligne_1 !='\0'|| ligne_2 != '\0')) {
                  printf("Cet emplacement est déjà occupe.\n");
                  barriere();
                }
                else{
                  printf("Votre choix est enregistre.\n");
                  nbbarrieres = nbbarrieres - 1;
                  /* VERIFIER QUE LA BARRIERE NE BLOQUE PAS LE PION ADVERSE*/
                  if (ligne_1 + 1 != '\0'|| ligne_1 - 1 != '\0' || ligne_2 + 1 != '\0'|| ligne_2 - 1 != '\0') {
                    bloque();
                  }
                  else {
                    printf("Votre choix est enregistre.\n");
                  }
                }
                break;
              }
              default:{
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

