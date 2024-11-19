//
// Created by galti on 19/11/2024.
//
#include <stdio.h>
int table_ascii(){
    int i,j;

    char tableau_ascii[i][j];
    for (i=0;i<240;i+= 16){
      for (j=0;j<15;j++){
        printf("%c",tableau_ascii[i][j]);
    }
        printf("Voici le tableau des caracteres disponibles:\n");
        printf("%c",tableau_ascii[i][j]);


    // Boucle à travers les valeurs ASCII de 0 à 127
    for (int i = 0; i < 15 ; i++) {
        // Affichage des valeurs décimales, hexadécimales, et des caractères
        for (j = 0, j < 240, j+= 16) {
            // Pour les caractères de contrôle, afficher un symbole (par exemple, .)
            printf("%d\t%02X\t.\n", i, i);
        }
    }

    int tableau[];
    for (int i=0; i<20; i++){
        printf("%d\n", tableau[i]);
    }


}
#include "table ascii.h"
