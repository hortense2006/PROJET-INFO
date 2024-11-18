#include <stdio.h>

void sauvegarde_score(char* pseudo, int score){
    FILE* pFichier = fopen(NULL"./sauvegarde_du_score.txt", "w"); // Ouverture du fichier sauvegarde_du_score.txt en mode écriture
    if (pFichier == NULL) { // Erreur d'ouverture de fichier
      return 1;
    }
    fclose(pFichier);
    pFichier = NULL;
}