//
// Created by galti on 16/11/2024.
//
#include <stdio.h>
#include "options.h"
#include "passer au dessus du pion.h"
int au_dessus_du_pion() {
    int positionx1,positionx2;
    int positiony1,positiony2;
    if((positionx1 == positionx2) && (positiony1== positiony2)) {
        printf("Voulez-vous aller v")
        switch(positionx1) {
            case 1: {

                break;
            }
            case 2: {
                positionx1 = positionx1;
                positiony1 = positiony1 + 2;
                break;
            }
            case 3: {
                positionx1 = positionx1 - 2;
                positiony1 = positiony1;
                break;
            }
            case 4: {
                positionx1 = positionx1;
                positiony1 = positiony1 - 2;
                break;
            }
            default: {
                printf("Erreur!\n");
                break;
            }
    }
    else {
        options();
    }
    return 0;
}
