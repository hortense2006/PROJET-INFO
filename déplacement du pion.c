//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include "déplacement du pion.h"
#include "NEOS.h"

int pion() {
    // DEFINITION DES VARIABLES
    int x,y, visuelpion,D;

  /*VISUEL DES PIONS*/
  printf("Entrez les coordonnees du pion de votre choix:\n");
  scanf("%d""%d",&visuelpion);

  /* PRESENTATION DES OPTIONS*/
  printf("Indiquez la direction D du placement de votre pion:\n");
  printf("1 = Aller vers la haut.           2. Aller vers la droite.\n");
  printf("3 = Aller vers la bas.              4 = Aller vers la gauche..\n");
  scanf("%d",&D);
