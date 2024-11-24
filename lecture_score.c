#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LONGUEUR_MAX_PSEUDO 21
#define NOMBRE_MAX_PSEUDOS 1000

int lecture_score(char* pseudo) {
    /// Cette fonction renvoit le score de la ligne dans scores.txt correspondant à pseudo dans pseudos.txt

    int nl_pseudos = 0; // numero_ligne_pseudos, variable itérative
    int nl_scores = 0; // numero_ligne_scores, variable itérative
    int pseudo_dans_la_liste = 0;
    int test = 0;
    int numero_de_la_ligne_du_pseudo = 0;
    char pseudos_lus[NOMBRE_MAX_PSEUDOS][LONGUEUR_MAX_PSEUDO]; // Tableau de pseudos lus
    int scores_lus[NOMBRE_MAX_PSEUDOS];

    // Vérification que le pseudo est bien dans pseudos.txt et recuperation du numero de la ligne du pseudo dans pseudos.txt :

    // 1) On lit les pseudos (dans pFichierPseudosR, le R est pour "Read")
    FILE* pFichierPseudosR = fopen("./donnees_sauvegardees/pseudos.txt", "r"); // Ouverture du fichier pseudos.txt en mode lecture
    if (pFichierPseudosR == NULL) { // Erreur d'ouverture de fichier
        printf("Erreur d'ouverture de fichier");
        exit(1);
    }
    while (fscanf(pFichierPseudosR, "%s", &pseudos_lus[nl_pseudos]) == 1){
        nl_pseudos++;
    }
    fclose(pFichierPseudosR);
    pFichierPseudosR = NULL;

    // 2) On vérifie si pseudo est bien dans pseudos[i]
    for (int i = 0; i <= nl_pseudos; i++) { // On parcourt toutes les lignes
        test = strcmp(pseudos_lus[i], pseudo); // Comparaison entre pseudo_lus[i] et pseudo
        if (test == 0) {
            // Dans le cas où pseudo_lus[i] = pseudo (pseudo est dans la liste)
            pseudo_dans_la_liste = 1;
            numero_de_la_ligne_du_pseudo = i; // 3) Le numero de la ligne du pseudo dans pseudos.txt vaut i
        }
    }
    // Dans le cas où pseudo n'est pas dans la liste
    if (!(pseudo_dans_la_liste)){
        printf("Erreur : le pseudo saisi, \"%s\", n'est pas dans la liste des pseudos\n", pseudo);
        exit(1);
    }

    // On lit les scores
    FILE* pFichierScoresR = fopen("./donnees_sauvegardees/scores.txt", "r"); // Ouverture du fichier scores.txt en mode lecture
    if (pFichierScoresR == NULL) {
        printf("Erreur d'ouverture de fichier");
        exit(1);
    }
    while (fscanf(pFichierScoresR, "%d", &scores_lus[nl_scores]) == 1){
        nl_scores++;
    }
    fclose(pFichierPseudosR);
    pFichierPseudosR = NULL;

    // On retourne le score dans scores.txt correspondant à la ligne dans pseudos.txt
    return scores_lus[numero_de_la_ligne_du_pseudo];
}