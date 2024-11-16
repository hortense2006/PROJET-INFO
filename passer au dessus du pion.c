//
// Created by galti on 16/11/2024.
//
#include <stdio.h>
#include <pion.h>
int au_dessus_du_pion(){
    /* PASSER AU DESSUS SI C'EST UN PION*/
    if (SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord)!='\n') {
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
                printf("Erreur!\n")
                pion();
                break;
            }

        }
        /* SINON C'EST UNE BARRIERE*/
        else{
            printf("Cette case est déjà occupee par une barriere. Faites un autre choix.\n");
            pion();
        }
}

#include "passer au dessus du pion.h"
