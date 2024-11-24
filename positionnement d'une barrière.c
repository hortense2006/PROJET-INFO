//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include "positionnement d'une barrière.h"
#include "placementbarrière.h"

#define MAX plateau[12][12]
#define MIN plateau[9][9]
int barriere(joueur -> nbrbarriere) {

    /*DEFINITION DES VARIABLES*/
    char visuel, d;
    int x, y;

  /*VISUEL DES BARRIERES A METTRE DANS LE MAIN*/
  printf("Saisissez le caractere de votre choix.\n");
  scanf("%c",&visuel);

  if (joueur -> nbbarriere != 0) {
      printf("Vous pouvez placer une barriere.");
      printf("Entrez les coordonnees x, y de la  barriere de votre choix:\n");
      printf("Quelle est la direction d de la barriere N, O, E ou S ?\n");
      scanf("%d%d%c",x,y,d);
      placebarrier(x,y,d);
  }
    return 0;
}
