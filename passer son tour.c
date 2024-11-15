//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include <options.h>
int passer(){
  // DECLARATION DES VARIABLES
  int joueur;
  int tour;
  int chiffrei;

  for (joueur = 1; joueur <= 4; joueur++){
    printf("Voulez-vous passer votre tour ?\n");
    printf("1. Oui\n");
    printf("2. Non\n");
    switch (chiffrei){
      case 1:{
        tour = joueur + 1;
        break;
      }
      case 2:{
        tour = joueur;
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
  return 0;
  }
#include "passer son tour.h"
