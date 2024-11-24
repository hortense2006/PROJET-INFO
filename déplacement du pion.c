//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include "déplacement du pion.h"
#include "NEOS.h"

int pion() {
    // DEFINITION DES VARIABLES
    int x,y, i, j, D;

  /*VISUEL DES PIONS*/
  printf("Entrez les coordonnees du pion de votre choix:\n");
  scanf("%d""%d",&i,&j);

  /* PRESENTATION DES OPTIONS*/
  printf("Indiquez la direction D du placement de votre pion:\n");
  printf("1 = Aller vers la gauche.           2. Aller vers la droite.\n");
  printf("3 = Avancer d'une case.              4 = Reculer d'une case.\n");
  scanf("%d",&D);
  NEOS(posX,posY,D); // La fonction NEOS s'occupe des déplacements du pion (Nord, Sud, Est, Ouest)

  /* VERIFIER SI LE MOUVEMENT EST POSSIBLE*/
  if (x !='\0') {
    printf("Cette case est déjà occupee.\n");
    if (y + 1 !='\0'|| y - 1 !='\0') {
      printf("Cette case est occupee par une barriere.\n");
    }
    else {
      // PASSER AU DESSUS DU PION
      x = x + 2;
    }
  }
  else{
    printf("Votre choix est enregistre.\n");
  }
  return 0;
}

