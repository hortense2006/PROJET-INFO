//
// Created by galti on 16/11/2024.
//
#include <stdio.h>
#include <windows.h>
#include "déplacement du pion.h"
int au_dessus_du_pion(){
    int possible;
    /* PASSER AU DESSUS SI C'EST UN PION*/
    if (SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord)!='\n') {
      if (SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord)== /*PION*/) {
          printf("Voulez-vous passer au dessus du pion ?\n");
          printf("1 = Oui\n");
          printf("2 = Non\n");
          printf("Selectionner soit 1 soit 2:\n");
          scanf("%d",&possible);
          switch (possible) {
              case 1: {
                  /*PASSER AU DESSUS DU PION*/
                  break;
              }
              case 2: {
                  pion();
                  break;
              }
              default:{
                  printf("Erreur!\n");
                  pion();
                  break;
              }
          }
      }
      else {
          /* SINON C'EST UNE BARRIERE*/
          printf("Cette case est déjà occupee par une barriere. Faites un autre choix.\n");
          pion();
      }
    }
    return 0;
}

#include "passer au dessus du pion.h"
