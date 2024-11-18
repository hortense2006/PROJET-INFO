//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include "options.h"
#include "passer son tour.h"
#define MIN 2
#define MAX 4
int passer(){
  // DECLARATION DES VARIABLES
  int nbjoueur, joueur, tour_du_joueur;

 if (nbjoueur  == MAX || nbjoueur == MIN){
 // LE JOUEUR DECIDE DE PASSER SON TOUR
    if (tour_du_joueur == '\0'){
      joueur = joueur +1;
    }
    else{
      printf("Le joueur a decide de jouer.\n");
      options();
    }
 }
 else {
   printf("Erreur!\n");
   options();
 }
  return 0;
}

