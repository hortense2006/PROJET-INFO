//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include "options.h"
#include "annuler son tour.h"
#define MIN 2
#define MAX 4
int annuler(){
  // DECLARATION DES VARIABLES
  int tour_du_joueur = 0, tour_precedent = 0, chiffrei, compteur = 1;
  printf("Voulez-vous annuler votre tour precedent?\n");
  printf("1. Oui.                     2 = Non.\n");
  printf("Saisissez un nombre.\n");
  scanf("%d",&chiffrei);
  if(chiffrei == 1){
    if (compteur!= 0){
      // ON VERIFIE QUE LE JOUEUR N'A PAS DEJA ANNULE UN TOUR
      printf("Le joueur n'a pas encore annule un tour.\n");
      printf("Voulez-vous annuler votre tour precedent?\n");
      printf("1. Oui.                   2 = Non.\n");
      printf("Saisissez soit 1 soit 2:\n");
      scanf("%d",&chiffrei);
      // LE JOUEUR DECIDE D'ANNULER SON TOUR
      if (chiffrei == 1){
        tour_du_joueur = tour_precedent;
        compteur = compteur - 1;
      }
      else{
        printf("Erreur!\n");
      }
    }
  }
  else{
    printf("Le joueur a deja annule un tour.\n");
  }
  return 0;
}


