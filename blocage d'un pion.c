//
// Created by galti on 16/11/2024.
//
#include <stdio.h>
#include "options.h"
#include "blocage d'un pion.h"
int bloque(){
  int cote, compteur = 0;

    /* VERIFIER QUE LA BARRIERE NE BLOQUE PAS LE PION ADVERSE*/
  for (cote = 1; cote <= 4; cote++) {
      if (cote != '\0'){
        printf("Le cote est deja occupe.\n");
        compteur = compteur + 1;
      }
      else {
        printf("Le cote n'est pas occupe.\n");
        compteur = compteur;
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

