#include <stdio.h>
#include <stdlib.h>
#define LARGEUR_PLATEAU 17
#define LONGUEUR_PLATEAU 17

void lecture_plateau(char* pplateau){
    /// Cette fonction prend en argument un pointeur sur un plateau. Elle lit le fichier plateau_en_pause.txt et remplit le plateau avec les valeurs de plateau_en_pause.txt

    // On lit les pseudos (dans pFichierPlateauR, le R est pour "Read")
    char c = 0;
    FILE* pFichierPlateauR = fopen("./donnees_sauvegardees/plateau_en_pause.txt", "r"); // Ouverture du fichier plateau_en_pause.txt en mode lecture
    if (pFichierPlateauR == NULL) { // Erreur d'ouverture de fichier
        printf("Erreur d'ouverture de fichier");
        exit(1);
    }
    for (int i = 0; i <= LARGEUR_PLATEAU; i++) {
        for (int j = 0; j <= LONGUEUR_PLATEAU; j++) {
            fscanf(pFichierPlateauR, "%c", &c);
            *(pplateau + i * LONGUEUR_PLATEAU + j) = c; // cette ligne permet de faire : plateau[i][j] = c;
        }
    }
    fclose(pFichierPlateauR);
    pFichierPlateauR = NULL;
}

