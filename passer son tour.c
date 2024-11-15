//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include <options.h>
#define MIN 2
#define MAX 4
int passer(){
  // DECLARATION DES VARIABLES
  int nbjoueur;
  int joueur1, joueur2, joueur3, joueur4;
  int tour;
  int chiffrei;
// VERIFICATION DU NOMBRE DE JOUEURS
  if (nbjoueur < MIN && nbjoueur > MAX){
    printf("Erreur!\n");
  }
  // POUR UNE PARTIE A 2 JOUEURS

  if (joueur =MIN,joueur++){
    printf("Voulez-vous passer votre tour ?\n");
    printf("1. Oui\n");
    printf("2. Non\n");
    switch (chiffrei){
      case 1:{
        tour = joueur+1;
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
  if (joueur =MAX,joueur++){
    printf("Voulez-vous passer votre tour ?\n");
    printf("1. Oui\n");
    printf("2. Non\n");
    switch (chiffrei){
      case 1:{
        tour = joueur-1;
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
