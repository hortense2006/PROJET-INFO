
#include <stdio.h>
int menu()
{
    // DEFINITION DES VARIABLES
    int menu;
    int nouvelle_partie =1 ;
    int reprendre_une_partie = 2;
    int aide = 3;
    int score = 4;
    int chiffre;

    // INTRODUCTION AU JEU
    printf("Bienvenue dans le jeu Quoridor!\n");

    // OPTIONS DE CONNEXION
    printf("Log in\n");
    printf("Sign in\n");
    if(1) { // 1 est vrai : choisit l'option 1
        int login();
    }
    if(0) { // 0 est faux : choisit l'option 2
        int signin();
    }
    // PRESENTATION DU MENU
        printf("Bienvenue dans le menu\n",menu);
        printf("1= Nouvelle partie \n", nouvelle_partie);
        printf("2= Reprendre une partie\n",reprendre_une_partie);
        printf("3= Demander de l'aide\n",aide);
        printf("4= Afficher le score\n",score);

        // CHOISIR UN CHIFFRE RELIE A UNE OPTION DU MENU
        printf("Selectionner un chiffre entre 1 et 4 :",chiffre);
        scanf("%d",&chiffre);
        // DETERMINER L'OPTION CHOISIE EN FONCTION DU CHIFFRE SAISI
        switch (chiffre) {
            case 1: {
                printf("Vous souhaitez commencer une nouvelle partie.\n");
            }
            case 2: {
                printf("Vous souhaitez reprendre une partie.\n");
            }
            case 3: {
                printf("Vous souhaitez demander de l'aide.\n");
            }
            case 4: {
                printf("1 = Afficher\n");
                printf("2 = Afficher les 10 prochains");
                    switch(score) {
                        case 1: {
                            printf("Vous souhaitez afficher le score.\n");
                            int score(1,0,0);
                        }
                        case 2: {
                            int score(1,1,0);
                        }
                        case 3: {
                            int menu();
                        }
                    }
                }
            default : {
                printf("Erreur\n");
            }
        }
    return 0;
}
