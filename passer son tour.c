//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include <options.h>
int passer(){
  // DECLARATION DES VARIABLES
  int joueur;
  int tour;

  for (joueur = 1; joueur <= 4; joueur++){
    if (1){ // 1 est vrai : le joueur passe son tour
      tour = joueur + 1;
    }
    if (0){ // 0 est faux : le joueur ne passe pas son tour et joue
      tour = joueur;
      options();
  }
  return 0;
  }
#include "passer son tour.h"
