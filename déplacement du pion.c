//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include "déplacement du pion.h"
#include "placementPion.h"

int pion() {
    // DEFINITION DES VARIABLES
    int chiffre2,position_x,position_y, i, j;
  /*VISUEL DES PIONS*/
  printf("Entrez les coordonnees du pion de votre choix:\n");
  scanf("%d""%d",&i,&j);

  /* PRESENTATION DES OPTIONS*/

  printf("1 = Aller vers la gauche.           2. Aller vers la droite.\n");
  printf("3 = Avancer d'une case.              4 = Reculer d'une case.\n");
  printf("Indiquez la direction D du placement de votre pion:\n");
  scanf("%d",&D);
  void placementPion();

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
  return 0;
}

