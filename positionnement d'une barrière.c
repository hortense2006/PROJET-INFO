//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include "positionnement d'une barrière.h"
#define MAX plateau[12][12]
#define MIN plateau[9][9]
int barriere() {

    /*DEFINITION DES VARIABLES*/
    int nbbarrieres_joueur,nbbarrieres_total;
    int nbjoueurs, taille_du_plateau ;
    int barriere_joueur,i,j;
    int ligne_2, colonne_1;

    /* NOMBRE DE BARRIERES*/
    if (nbjoueurs == 2) {
      nbbarrieres_total = 20;
      nbbarrieres_joueur = nbbarrieres_total/2;
    }
    if (nbjoueurs == 4) {
      nbbarrieres_total = 40;
      nbbarrieres_joueur = nbbarrieres_total/4;
    }
  /*VISUEL DES BARRIERES*/
  printf("Saisissez le caractere de votre choix.\n");
  scanf("%d",&barriere_joueur);

  if (nbbarrieres_joueur != 0) {
    printf("Vous pouvez placer une barriere.");
    printf("Entrez les coordonnees de la  barriere de votre choix:\n");
    scanf("%d""%d",&i,&j);

        /* VERIFIER QUE LA BARRIERE NE BLOQUE PAS LE PION ADVERSE*/
        if (colonne_1 + 1 != '\0'|| colonne_1 - 1 != '\0' || ligne_2 + 1 != '\0'|| ligne_2 - 1 != '\0') {
          printf("Cet position est déja prise.\n");
        }
        else
        {
          //mettre la barriere
          printf("Votre choix est enregistre.\n");
          nbbarrieres_joueur = nbbarrieres_joueur -1;
        }
    }
  else {
    printf("Vous n'avez plus de barrieres.\n");
  }
    return 0;
}
