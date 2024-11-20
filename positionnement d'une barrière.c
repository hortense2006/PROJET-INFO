//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include "blocage d'un pion.h"
#include "options.h"
#include "positionnement d'une barrière.h"
#include "table ascii.h"
#define MAX plateau[12][12]
#define MIN plateau[9][9]
int barriere() {

    /*DEFINITION DES VARIABLES*/
    int nbbarrieres,nbbarrieres_total;
    int nbjoueurs, taille_du_plateau ;
    int chiffre3,i,j;
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
  /*VISUEL DES BARRIERES*/

  if (nbbarrieres != 0) {
    printf("Vous pouvez placer une barriere.

  printf("Entrez les coordonnees de la  barriere de votre choix:\n");
  scanf("%d""%d",&i,&j);

        /* VERIFIER QUE LA BARRIERE NE BLOQUE PAS LE PION ADVERSE*/
        if (//position deja pris) {
          printf("Cet position est déja prise.\n");
        }
        else
        {
          //mettre la barriere
          printf("Votre choix est enregistre.\n");
          nbbarrieres = nbbarrieres -1;
        }
    }
    return 0;
}