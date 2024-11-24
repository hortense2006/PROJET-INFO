//
// Created by galti on 18/11/2024.
//
#include "tour des joueurs.h"
#include "déplacement du pion.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <time.h>

int tour(Partie -> nbjoueurs, Partie -> ordretour, int nbj){
  // ORDRE ALEATOIRE DES JOUEURS
  int joueur = 0, joueur1, joueur2, joueur3, joueur4, i, a, b;
  int tableau[nbj];

  // FONCTION DE COMPARAISON POUR QSORT

  int comparer (const void *a, const void *b);
  {
    return (*(int*)a - *(int*)b);
  }

  // ON INITIALISE LE GENERATEUR DE VARIABLES ALEATOIRES
  srand(time(NULL));

  /* ON GENERE LES 4 VARIABLES DE MANIERE ALEATOIRE*/
  joueur1 = rand();
  joueur2 = rand();
  joueur3= rand();
  joueur4 = rand();

  // TRI DU TABLEAU

  tableau[1] = joueur1;
  tableau[2] = joueur2;
  tableau[3] = joueur3 ;
  tableau[4] = joueur4 ;

  qsort(tableau,nbj,sizeof(int), comparer(const void *a, const void *b)); // La fonction qsort trie les nombres aléatoires obtenus dans l'ordre croissant.

  for(i=0; i< nbj; i++){
     if(tableau[1] == joueur1){
       joueur1 = tableau[i];
       Partie -> ordrejoueur = Partie -> ordrejoueur + "joueur1";
     }
     else if(tableau[2] == joueur2){
       joueur2 = tableau[i];
       Partie -> ordrejoueur = Partie ->ordrejoueur + ",joueur2";
     }
     else if(tableau[3] == joueur3){
       joueur3 = tableau[i];
       Partie -> ordrejoueur = Partie ->ordrejoueur + ",joueur3";
     }
     else if(tableau[4] == joueur4){
       joueur4 = tableau[i];
       Partie -> ordrejoueur = Partie -> ordrejoueur + ",joueur4";
     }
  // AFFICHAGE DES VARIABLES TRIEES
  printf("L'ordre des joueurs est :\n");
  for(i = 0; i < nbj; i++){
      printf("%d ",tableau[i]);
  }

  return Partie -> ordrejoueurs;
}

