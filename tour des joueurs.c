//
// Created by galti on 18/11/2024.
//
#include "tour des joueurs.h"
#include "déplacement du pion.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tour(Partie -> nbjoueurs, Partie -> ordretour){
  // ORDRE ALEATOIRE DES JOUEURS
  int joueur = 0, var3, var, var1, var2, tableau[4], i;
  // FONCTION DE COMPARAISON POUR QSORT

  int comparer (const void *a, const void *b);
  {
    return (*(int*)a - *(int*)b);
  }

  // ON INITIALISE LE GENERATEUR DE VARIABLES ALEATOIRES
  srand(time(NULL));

  // ON GENERE LES 4 VARIABLES
  for (i = 0; i < 4; var++){
    tableau[i] = rand() % 4;
  }
  // ON LES AFFICHE DANS UN TABLEAU
  for (int i = 0; i < 4; i++){
    printf("%d ", tableau[i]);
  }

  // TRI DU TABLEAU
  qsort(tableau,4,sizeof(int), comparer);

  // AFFICHAGE DES VARIABLES TRIEES
  printf("L'ordre des joueurs est :\n");
  for(i = 0; i < 4; var++){
    printf("%d ",tableau[i]);
  }

  return 0;
}

