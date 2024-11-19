//
// Created by galti on 19/11/2024.
//
#include <stdio.h>
#include "table ascii.h"

int table_ascii(){
    int i,j;
    char tableau_ascii[i][j];
    for (i=0;i<240;i+= 16){
      for (j=0;j<15;j++){
        printf("%c",tableau_ascii[i][j]);
          printf("%d\t%02X\t.\n",i,j);
      }
    }
    printf("Voici le tableau des caracteres disponibles:\n");
    printf("%c",tableau_ascii[i][j]);
}
