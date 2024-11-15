
#include <stdio.h>
#include <signin.h>
#include <login.h>
int menu()
{
    // DEFINITION DES VARIABLES
    int menu;
    int nouvelle_partie =1 ;
    int reprendre_une_partie = 2;
    int aide = 3;
    int score = 4;
    int chiffre, nb, nb1;

    // INTRODUCTION AU JEU
    int accueil();
    {
        printf("Bienvenue dans le jeu Quoridor!\n");

        // OPTIONS DE CONNEXION
        printf("Log in\n");
        printf("Sign in\n");
        if(1) { // 1 est vrai : choisit l'option 1
            nb = login();
        }
        if(0) { // 0 est faux : choisit l'option 2
            nb1 = signin();
        }
    }
    // PRESENTATION DU MENU
        printf("Bienvenue dans le menu\n",menu);
        printf("1= Nouvelle partie \n", nouvelle_partie);
        printf("2= Reprendre une partie\n",reprendre_une_partie);
        printf("3= Demander de l'aide\n",aide);
        printf("4= Afficher le score\n",score);
        printf("5 = Quitter\n");

        // CHOISIR UN CHIFFRE RELIE A UNE OPTION DU MENU
        printf("Selectionner un chiffre entre 1 et 5 :",chiffre);
        scanf("%d",&chiffre);
        // DETERMINER L'OPTION CHOISIE EN FONCTION DU CHIFFRE SAISI
        switch (chiffre) {
            case 1: {
                printf("Vous souhaitez commencer une nouvelle partie.\n");
                break;
            }
            case 2: {
                printf("Vous souhaitez reprendre une partie.\n");
                break;
            }
            case 3: {
                printf("Vous souhaitez demander de l'aide.\n");
                int aide();
                break;
            }
            case 4: {
                printf("1 = Afficher\n");
                printf("2 = Afficher les 10 prochains");
                    switch(score) {
                        case 1: {
                            printf("Vous souhaitez afficher le score.\n");
                            int score(1,0,0);
                            break;
                        }
                        case 2: {
                            int score(1,1,0);
                            break;
                        }
                        case 3: {
                            int menu();
                            break;
                        }
                    }
                break;
                }
            case 5: {
                int accueil();
                break;
            }
            default : {
                printf("Erreur\n");
                break;
            }
        }
    return 0;
}
