#include <stdio.h>
#include "login.h"
#include "signin.h"
#include "nouvelle partie.h"
#include "reprendre une partie.h"
#include "aide.h"
#include "score.h"
#include "accueil.h"

// MENU DU JEU
int menu()
{
    // DEFINITION DES VARIABLES
    int menu;
    int nouvelle_partie =1 ;
    int reprendre_une_partie = 2;
    int aide = 3;
    int score = 4;
    int chiffre, chiffreac, chiffread,chiffreae, chiffreaf;

    // PRESENTATION DU MENU
        printf("Bienvenue dans le menu\n");
        printf("1= Nouvelle partie \n");
        printf("2= Reprendre une partie\n");
        printf("3= Demander de l'aide\n");
        printf("4= Afficher le score\n");
        printf("5= Quitter\n");

        // CHOISIR UN CHIFFRE RELIE A UNE OPTION DU MENU
        printf("Selectionner un chiffre entre 1 et 5 :");
        scanf("%d",&chiffre);
        // DETERMINER L'OPTION CHOISIE EN FONCTION DU CHIFFRE SAISI
        switch (chiffre) {
            case 1: {
                printf("Souhaitez vous commencer une nouvelle partie ? \n");
                printf ("1 = Oui\n");
                printf (" 2 = Non\n");
                printf("Selectionner un chiffre entre 1 et 2: ");
                scanf("%d",&chiffreac);
                switch (chiffreac) {
                    case 1: {
                        nouvelle_partie();
                        break;
                    }
                    case 2: {
                        menu();
                    }
                    default: {
                        printf("Erreur !\n");
                        menu();
                    }
                }
                break;
            }
            case 2: {
                printf("Souhaitez vous reprendre une partie ? \n");
                printf ("1 = Oui\n");
                printf (" 2 = Non\n");
                printf("Selectionner un chiffre entre 1 et 2: ");
                scanf("%d",&chiffread);
                switch (chiffread) {
                    case 1: {
                        reprendre_une_partie();
                        break;
                    }
                    case 2: {
                        menu();
                        break;
                    }
                    default: {
                    printf("Erreur !\n");
                    menu();
                        break;
                    }
                }
                break;
            }
            case 3: {
                printf("Souhaitez vous demander de l'aide ? \n");
                printf ("1 = Oui\n");
                printf (" 2 = Non\n");
                printf("Selectionner un chiffre entre 1 et 2: ");
                scanf("%d",&chiffreae);
                switch (chiffreae) {
                    case 1: {
                        aide();
                        break;
                    }
                    case 2: {
                        menu();
                        break;
                    }
                    default : {
                        printf("Erreur !\n");
                        menu();
                    }
                }
                break;
            }
            case 4: {
                 printf("Souhaitez vous afficher le score ?\n");
                printf("1 = Afficher\n");
                printf("2 = Afficher les 10 prochains\n");
                printf("Selectionner un chiffre entre 1 et 2: ");
                scanf("%d",&score);
                    switch(score) {
                        case 1: {

                            printf("Vous souhaitez afficher le score.\n");
                            score(1,0,0);
                            break;
                        }
                        case 2: {
                            score(1,1,0);
                            break;
                        }
                        default: {
                            menu();
                            break;
                        }
                    }
                break;
                }
            case 5: {
                printf("Voulez vous quitter le jeu ?\n");
                printf("1 = Oui\n");
                printf("2 = Non\n");
                printf("Selectionner un chiffre entre 1 et 2: ");
                scanf("%d",&chiffreaf);
                switch (chiffreaf) {
                    case 1: {
                        accueil();
                        break;
                    }
                    case 2: {
                        menu();
                        break;
                    }
                    default : {
                        printf("Erreur !\n");
                        accueil();
                    }
                }
                break;
            }
            default : {
                printf("Erreur\n");
                break;
            }
        }
    return 0;
}
#include "menu.h"