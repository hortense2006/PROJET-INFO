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
  int joueur;
  int tour_du_joueur;
  int chiffrei;
  int i;
  // TROIS CAS DE FIGURE POSSIBLES
 if(nbjoueur > MAX && nbjoueur < MIN){
   printf("Erreur !\n");
   }
   else if (nbjoueur < MAX && nbjoueur > MIN){
     printf("Erreur !\n");
  }
  else (nbjoueur  == MAX || nbjoueur == MIN){
    // LE JOUEUR DECIDE DE PASSER SON TOUR
    if (tour_du_joueur == '\n'){
      joueur = joueur +1;
    }
    else{
      printf("Le joueur a decide de jouer.\n");
    }
  }
  return 0;
}
#include "passer son tour.h"
