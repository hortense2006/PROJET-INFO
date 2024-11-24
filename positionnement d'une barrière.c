//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include "positionnement d'une barrière.h"
#include "placementbarrière.h"


int barriere(joueur -> nbbarriere, Plateau *plateau) {

    /*DEFINITION DES VARIABLES*/
    char visuel, d;
    int x, y;

  /*VISUEL DES BARRIERES A METTRE DANS LE MAIN*/
  printf("Saisissez le caractere de votre choix.\n");
  scanf("%c",&visuel);

  while (joueur -> nbbarriere < 10 ) {
      printf("Vous pouvez placer une barriere.");
      printf("Entrez les coordonnees x, y de la  barriere de votre choix:\n");
      printf("Quelle est la direction d de la barriere N, O, E ou S ?\n");
      scanf("%d%d%c",x,y,d);
      placementBarriere(Plateau *plateau,x,y,d, joueur -> nbbarriere);
  }
    return 0;
}
