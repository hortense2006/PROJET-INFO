#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LONGUEUR_MAX_PSEUDO 21
#define NOMBRE_MAX_PSEUDOS 1000

void ecriture_pseudo(char pseudo[]){
    /// Cette fonction vérifie si le pseudo entré existé déjà, et si ce n'est pas le cas, enregistre dans pseudo.txt.
    int numero_ligne = 0;
    char pseudos_lus[NOMBRE_MAX_PSEUDOS][LONGUEUR_MAX_PSEUDO]; // Tableau de pseudos lus
    int test = 0;

    // On lit les pseudos (dans pFichierPseudosR, le R est pour "Read")
    FILE* pFichierPseudosR = fopen("./donnees_sauvegardees/pseudos.txt", "r"); // Ouverture du fichier pseudos.txt en mode lecture
    if (pFichierPseudosR == NULL) { // Erreur d'ouverture de fichier
        printf("Erreur d'ouverture de fichier");
        exit(1);
    }
    while (fscanf(pFichierPseudosR, "%s", &pseudos_lus[numero_ligne]) == 1){
        numero_ligne++;
    }
    fclose(pFichierPseudosR);
    pFichierPseudosR = NULL;

    // On vérifie si le pseudo entré existe déjà
    for (int i = 0; i <= numero_ligne; i++) { // On parcourt toutes les lignes
        test = strcmp(pseudos_lus[i], pseudo); // Comparaison entre pseudo_lus[i] et pseudo
        if (test == 0) { // Dans le cas où pseudo_lus[i] = pseudo
            printf("Erreur : Le pseudo que vous avez saisi : \"%s\" existe deja.\n", pseudo);
            exit(1);
        }
    }
    // Situation où le pseudo n'existe pas déjà :
    // 1) on ajoute le pseudo dans pseudos.txt
    // (dans pFichierPseudosA, le A est pour "Add")
    FILE* pFichierPseudosA = fopen("./donnees_sauvegardees/pseudos.txt", "a"); // Ouverture du fichier pseudos.txt en mode ajout
    if (pFichierPseudosA == NULL) { // Erreur d'ouverture de fichier
        printf("Erreur d'ouverture de fichier\n");
        exit(1);
    }
    fprintf(pFichierPseudosA, "%s", pseudo);
    fprintf(pFichierPseudosA, "%s", "\n");
    printf("Votre pseudo \"%s\" a ete sauvegarde.\n", pseudo);
    fclose(pFichierPseudosA);
    pFichierPseudosA = NULL;
    // 2) Enregistrement de 0 à la ligne correspondant au joueur dans scores.txt
    FILE* pFichierScoreA = fopen("./donnees_sauvegardees/scores.txt", "a");
    if (pFichierScoreA == NULL) { // Erreur d'ouverture de fichier
        printf("Erreur d'ouverture de fichier");
        exit(1);
    }
    fprintf(pFichierScoreA, "%d", 0);
    fprintf(pFichierScoreA, "%s", "\n");
    fclose(pFichierScoreA);
    pFichierScoreA = NULL;
}
