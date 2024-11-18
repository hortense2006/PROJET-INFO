#include <stdio.h>
#include <unistd.h>
#include "login.h"
#include "signin.h"
#include "nouvelle partie.h"
#include "reprendre une partie.h"
#include "aide.h"
#include "score.h"
#include "accueil.h"
#include "menu.h"

// MENU DU JEU
int menu()
{
    // DEFINITION DES VARIABLES
    int menu;
    int nouvelle_partie =1 ;
    int reprendre_une_partie = 2;
    int aide = 4;
    int score = 3;
    int choice=0;
    int choice1,choice2,choice3,choice4;
    int exit3;


    // PRESENTATION DU MENU

    printf("Bienvenue dans le menu\n");
    printf("1= Nouvelle partie.                        2= Reprendre une partie.\n");
    printf("3= Afficher le score.                      4= Demander de l'aide.\n");

        // CHOISIR UN CHIFFRE RELIE A UNE OPTION DU MENU
    printf("\n\nSelectionner un chiffre entre 1 et 4 :");
         if (scanf("%d", &choice) == 1)
    {
        while(1)
        {
            // PRESENTATION DU MENU
            if (scanf("%d", &choice) != 0)
            {
                switch (choice)
                {
                    //Nouvelle partie
                    case 1:
                    {
                        printf("Souhaitez vous commencer une nouvelle partie ? \n");
                        printf ("1 = Oui\n");
                        printf (" 2 = Non\n");
                        printf("Selectionner un chiffre entre 1 et 2: ");
                        scanf("%d",&choice1);
                        switch (choice1) {
                            case 1: {
                                nouvelle_partie();
                                break;
                            }
                            default: {
                                printf("Erreur !\n");

                                break;
                            }
                        }
                        break;
                    }
                    //Reprendre une partie
                    case 2:
                    {
                        printf("Souhaitez vous reprendre une partie ? \n");
                        printf ("1 = Oui\n");
                        printf (" 2 = Non\n");
                        printf("Selectionner un chiffre entre 1 et 2: ");
                        scanf("%d",&choice2);
                        switch (choice2) {
                            case 1: {
                                reprendre_une_partie();
                                break;
                            }
                            default: {
                                printf("Erreur !\n");
                                break;
                            }
                        }
                        break;
                    }

                    //Afficher le score
                    case 3:
                    {
                        printf("Souhaitez vous afficher le score ?\n");
                        printf("1 = Afficher\n");
                        printf("2 = Afficher les 10 prochains\n");
                        printf("Selectionner un chiffre entre 1 et 2: ");
                        scanf("%d",&score);
                        while(exit3 != 1)
                        {
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
                                  printf("Erreur !\n");
                                    break;
                                }
                            }
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            sleep(5);
                            //score(1,0);
                        }
                        break;
                    }

                    //L'aide
                    case 4:
                    {
                      printf("Souhaitez vous demander de l'aide ? \n");
                      printf ("1 = Oui\n");
                      printf (" 2 = Non\n");
                      printf("Selectionner un chiffre entre 1 et 2: ");
                      scanf("%d",&choice3);
                        switch (choice3) {
                          case 1: {
                            aide();
                            break;
                          }
                          default : {
                             printf("Erreur !\n");
                          }
                        }
                        break;
                    }
                    default:
                    {
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nEntrez un chiffre valide, merci.");
                    }
                }
            }
        }
    }
    return 0;
}

