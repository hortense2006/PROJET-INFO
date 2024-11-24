#include <stdio.h>
#include <stdlib.h>
#define LARGEUR_PLATEAU 17
#define LONGUEUR_PLATEAU 17

void ecriture_plateau(char plateau[17][17]){
    /// Enregistre dans partie_en_pause.txt le plateau à deux dimensions fourni ainsi que le numero du joueur dont c'est le tour de jouer
    FILE* pFichierPlateauW = fopen("./donnees_sauvegardees/plateau_en_pause.txt", "w"); // Ouverture du fichier plateau_en_pause.txt en mode écriture
    if (pFichierPlateauW == NULL) {
        printf("Erreur d'ouverture de fichier");
        exit(1);
    }
    for (int i = 0; i < LARGEUR_PLATEAU; i++) { // Pour chaque colonne
        for (int j = 0; j < LONGUEUR_PLATEAU; j++) { // Pour chaque ligne
            fprintf(pFichierPlateauW, "%c", plateau[i][j]); // On enregistre dans plateau_en_pause.txt à la colonne i et à la ligne j, l'élément correspondant du plateau fourni en arguments
        }
        fprintf(pFichierPlateauW, "%s", "\n");
    }
    fclose(pFichierPlateauW);
    pFichierPlateauW = NULL;
}