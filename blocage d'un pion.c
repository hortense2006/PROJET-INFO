//
// Created by galti on 16/11/2024.
//
#include <stdio.h>
#include "options.h"
#include "blocage d'un pion.h"
int bloque(){
  int cote, compteur = 0;
  int devant, derriere, gauche, droite;
    /* VERIFIER QUE LA BARRIERE NE BLOQUE PAS LE PION ADVERSE*/
  switch (cote) {
    case 1:{
      cote = devant;
      if (cote != '\0'){
        printf("Le cote est deja occupe.\n");
        compteur = compteur + 1;
      }
      else {
        printf("Le cote n'est pas occupe.\n");
        compteur = compteur;
      }
      break;
    }
    case 2:{
      cote = derriere;
      if (cote != '\0'){
        printf("Le cote est deja occupe.\n");
        compteur = compteur + 1;
      }
      else{
        printf("Le cote n'est pas occupe.\n");
      }
      break;
    }
    case 3:{
      cote = gauche;
      if (cote != '\0'){
        printf("Le cote est deja occupe.\n");
        compteur = compteur + 1;
      }
      else{
        printf("Le cote n'est pas occupe.\n");
        compteur = compteur;
      }
      break;
    }
    case 4:{
      cote = droite;
      if (cote != '\0'){
        printf("Le cote est deja occupe.\n");
        compteur = compteur + 1;
      }
      else {
        printf("Le cote n'est pas occupe.\n");
        compteur = compteur;
      }
      break;
    }
  }
  printf("Il y a %d barrieres.\n", compteur);
  scanf("%d",&compteur);
    if (compteur != 3){
      printf("Il y a moins de 3 barrieres, le choix est donc valide.\n");
    }
    else{
      printf("Il y a deja 3 barrieres. Votre choix n'est donc pas possible.\n");
      options();
    }
}

