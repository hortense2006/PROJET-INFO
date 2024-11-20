#include <stdio.h>
#include <unistd.h>
#include "login.h"
#include "signin.h"
#include "nouvelle partie.h"
#include "reprendre une partie.h"
#include "aide.h"
#include "score.h"
#include "options.h""
#include "menu.h"

// MENU DU JEU
int menu()
{
    // DEFINITION DES VARIABLES
    int nouvelle_partie =1, reprendre_une_partie =2,score=3, aide =4;
    int next = 0,choice=0;
    int exit3;

    printf("\n\n\n Entrer 1 pour continuer!\n");
         if (scanf("%d", &next) == 1)
    {
        while(1)
        {
            // PRESENTATION DU MENU
            printf("Bienvenue dans le menu\n");
            printf("1= Nouvelle partie.                        2= Reprendre une partie.\n");
            printf("3= Afficher le score.                      4= Demander de l'aide.\n");

            // CHOISIR UN CHIFFRE RELIE A UNE OPTION DU MENU
            printf("\n\n Selectionner un chiffre entre 1 et 4 :");
            if (scanf("%d", &choice) != 0)
            {
                switch (choice)
                {
                    //Nouvelle partie
                    case 1:
                    {
                        printf("Souhaitez vous commencer une nouvelle partie ? \n");
                        printf ("1 = Oui.                     2 = Non.\n");
                        printf("Selectionner un chiffre entre 1 et 2: ");
                        scanf("%d",&choice);
                        if(choice == 1){
                          nouvelle_partie();
                        }
                        else{
                         options();
                        }

                        break;
                    }
                    //Reprendre une partie
                    case 2:
                    {
                        printf("Souhaitez vous reprendre une partie ? \n");
                        printf ("1 = Oui.                     2 = Non.\n");
                        printf("Selectionner un chiffre entre 1 et 2: ");
                        scanf("%d",&choice);
                        if(choice == 1){
                          reprendre_une_partie();
                        }
                        else{
                          options();
                        }
                        break;
                    }

                    //Afficher le score
                    case 3:
                    {
                        printf("Souhaitez vous afficher le score ?\n");
                        printf("1 = Afficher.             2 = Afficher les 10 prochains.            3 = Non. \n");
                        printf("Selectionner un chiffre entre 1 et 3: ");
                        scanf("%d",&score);
                        while(exit3 != 1)
                        {
                          if(choice == 1){
                              printf("Vous souhaitez afficher le score.\n");
                              score(1,0,0);
                          }
                          else if(choice == 2){
                              score(1,1,0);
                          }
                          else {
                            menu();
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
                      printf ("1 = Oui.                    2 = Non.\n");
                      printf("Selectionner un chiffre entre 1 et 2: ");
                      scanf("%d",&choice);
                      if(choice == 1){
                        aide();
                      }
                      else if(choice == 2){
                        options();
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

