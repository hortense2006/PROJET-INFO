#include <stdio.h>
#include "aide.h"

int aide(){
    printf("Les regles du jeu sont :\n");

    printf(" Regle 1 : Votre but est d'atteindre le bord oppose du plateau.\n\n");

    printf("Regle 2 : Vous avez 5 à 10 barrieres a votre disposition, pour bloquer votre adversaire.\n\n");

    printf("Regle 3: Vous ne pouvez pas superposer 2 barrieres.\n\n");

    printf("Regle 4: Si votre pion se retrouve face à face avec un autre pion, vous pouvez passer au dessus de celui-ci.\n\n");

    printf("Regle 5: Si votre partie est a 4 joueurs, vous ne pouvez pas sauter plus d'un pion a la fois.\n\n");

    printf("Regle 6: Vous ne pouvez annuler votre tour precedent qu'une seule fois\n\n");

    printf("Regle 7: Vous pouvez acceder a votre score via le menu. Celui-ci est automatiquement sauvegarde.\n\n");
    return 0;
}