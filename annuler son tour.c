//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include <options.h>
#define MIN 2
#define MAX 4
int annuler(){
  // DECLARATION DES VARIABLES
  int nbjoueur;
  int joueur;
  int tour_du_joueur;
  int tour_precedent;
  int chiffrei;
  int i;
  printf("Voulez-vous annuler votre tour precedent?\n");
  printf("1. Oui\n");
  printf("2. Non\n");
  printf("Saisissez un nombre.\n");
  scanf("%d",&chiffrei);
  switch (chiffrei){
    case 1:{
      // ON VERIFIE QUE LE JOUEUR N'A PAS DEJA ANNULE UN TOUR
      if (tour_du_joueur != tour_precedent ){
        printf("Le joueur n'a pas encore annule un tour.\n");
      }
      else{
        printf("Le joueur a deja annule un tour.\n");
        options();
      }
      // LE JOUEUR DECIDE D'ANNULER SON TOUR
      if (tour_du_joueur == '\n'){
        tour_du_joueur = tour_precedent;
      }
      else{
        printf("Le joueur a decide de jouer.\n");
      }
      break;
    }
     case 2:{
       options();
       break;
     }
     default:{
        printf("Erreur!\n");
        break;
     }
  }
  return 0;
}
#include "annuler son tour.h"
