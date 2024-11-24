#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "nouvelle partie.h"
#include "reprendre une partie.h"
#include "aide.h"
#include "score.h"
#include "login.h"
#include "signin.h"
#include "accueil.h"



int main(void)
{
    // DEFINITION DES VARIABLES
    int next = 0,choice=0;
    int choice1,choice2,choice3,choice4;
    int exit = 1,exit1=1,exit2=1,exit3=1,exit4=1, exit5=1;

    /* ACCUEIL DU JEU*/
    printf("BIENVENUE DANS LE JEU QUORIDOR");
    printf("\n\n\nEntrer 1 pour continuer!\n");

    /* OPTIONS DE CONNEXION*/
    printf(" 1 = Log in.                   2 = Sign in\n");
    printf("Selectionner soit 1 soit 2:\n");
    scanf("%d",&chiffrea);
    switch (chiffrea) {
        case 1: {
          while(exit != 0) {
            login();
            printf("Pour sortir tapez 0.\n");
          }
        }
        case 2: {
          while (exit5 != 0) {
              signin();
              printf("Pour sortir tapez 0.\n");
          }
        default :{
           printf("Erreur\n");
           accueil();
        }


    if (scanf("%d", &next) == 1)
    {

        // BOUCLE GENERAL DU MENU
        while(1)
        {
            // PRESENTATION DU MENU
            printf("Bienvenue dans le menu ! \n");
            printf("1= Nouvelle partie.                        2= Reprendre une partie.\n");
            printf("3= Afficher le score.                      4= Demander de l'aide.\n");

            printf("\n\nSelectionner un chiffre entre 1 et 4 :");
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
                        switch (choice1)
                        {
                            case 1:
                            {
                                while(exit1 !=0)
                                {
                                    nouvelle partie();

                                    //verification
                                    plateau();

                                    printf("Pour sortir tapez 0\n");
                                    scanf("%d",&exit1);
                                }
                                break;
                            }
                            default:
                            {
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
                        switch (choice2)
                        {
                            case 1:
                            {
                                while(exit2 !=0)
                                {
                                    reprendre une partie();

                                    //verification
                                    plateau();

                                    printf("Pour sortir tapez 0\n");
                                    scanf("%d",&exit2);
                                }
                                break;
                            }
                            default:
                            {
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
                        printf("2 = non\n");
                        printf("Selectionner un chiffre entre 1 et 2: ");
                        scanf("%d",&choice3);
                        switch (choice3)
                        {
                            case 1:
                            {
                                while(exit3 !=0)
                                {
                                    score(1);
                                    printf("Pour sortir tapez 0\n");
                                    scanf("%d",&exit3);
                                }
                                break;
                            }
                            default:
                            {
                                printf("Erreur !\n");
                                break;
                            }
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
                        scanf("%d",&choice4);
                        switch (choice4)
                        {
                            case 1:
                            {
                                while(exit4 !=0)
                                {
                                    aide();
                                    printf("Pour sortir tapez 0\n");
                                    scanf("%d",&exit4);
                                }
                                break;
                            }
                            default:
                            {
                                printf("Erreur !\n");
                                break;
                            }
                        }
                        break;
                    }
                    default:
                    {
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nEntrez un chiffre valide, merci.");
                        break;
                    }
                }
            }
        }
    }
    return "fin premature";
    struct joueur{
      int user;
      int mdp;
      int score;
      int  Partie -> ordretour;

    };
}
