//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include "options.h"
#include "annuler son tour.h"
#define MIN 2
#define MAX 4
int annuler() {
  // DECLARATION DES VARIABLES
  int tour_du_joueur, tour_precedent, chiffrei, compteur = 1;

  printf("Voulez-vous annuler votre tour precedent?\n");
  printf("1. Oui.                     2 = Non.\n");
  printf("Saisissez un nombre.\n");
  scanf("%d",&chiffrei);
  if(chiffrei == 1) {
    // ON VERIFIE QUE LE JOUEUR N'A PAS DEJA ANNULE UN TOUR
    if (compteur!= 0) {
      printf("Le joueur n'a pas encore annule un tour.\n");
      printf("Voulez-vous annuler votre tour precedent?\n");
      printf("1. Oui.                   2 = Non.\n");
      printf("Saisissez soit 1 soit 2:\n");
      scanf("%d",&chiffrei);
      if(chiffrei == 1) {
        tour_du_joueur = tour_precedent;
        compteur = compteur - 1;
      }
      else {
        options();
      }
    }
    else {
      printf("Le joueur a deja annule un tour.\n");
      options();
    }
  }
  else {
    options();
  }
  return 0;
}


