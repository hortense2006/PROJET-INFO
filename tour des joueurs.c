//
// Created by galti on 18/11/2024.
//
#include "tour des joueurs.h"
#include "déplacement du pion.h"
#include <stdio.h>
#include <stdlib.h>
#define RAND MAX 4

int tour(){
  // ORDRE ALEATOIRE DES JOUEURS
  int nbjoueurs = 0, joueur;
  int position_x, position_y;

  while (joueur <= nbjoueurs){
    for(joueur = 0; joueur <= 4; nbjoueurs++) {
      printf("%d", rand());
      scanf("%d",&joueur);
    }
  }
  return 0;
}

