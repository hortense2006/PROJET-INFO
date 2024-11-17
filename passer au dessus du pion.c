//
// Created by galti on 16/11/2024.
//
#include <stdio.h>
#include <windows.h>
#include "options.h"
#include "passer au dessus du pion.h"
int au_dessus_du_pion() {
    int positionx1,positionx2,positiony1,positiony2;
    if((positionx1=positionx2) && (positiony1=positiony2)) {
        positionx1 = positionx1 +2;
    }
    else {
        options();
    }
    return 0;
}
