#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    // DEFINITION DES VARIABLES
    int next=0, choice=0;
    int exit=0, exit2=0, exit3=0, exit4=0;


    // INTRODUCTION AU JEU
    printf("\n\n\nQUORIDOR !\n\n\n");


    if (scanf("%d", &next) == 1)
    {
        while(1)
        {
            // INITIALISATION DE VARIABLE
            choice=0;
            exit=0, exit2=0, exit3=0, exit4=0;

            // PRESENTATION DU MENU
            printf("Bienvenue dans le menu\n");
            printf("1= Nouvelle partie.                        2= Reprendre une partie.\n");
            printf("3= Afficher le score.                      4= Demander de l'aide.\n");
            printf("\n\nSelectionner un chiffre entre 1 et 4 :");

            if (scanf("%d", &choice) !==0)
            {
                switch (choice)
                {
                    //Nouvelle partie
                    case 1:
                    {
                        //t
                    }


                    //Repprendre une partie
                    case 2:
                    {
                        //t
                    }

                    //Afficher le score
                    case 3:
                    {
                        while(exit3 !== 1)
                        {
                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            sleep(5);
                            //score(1,0);
                            printf("\n\nPour retourner au menu tapez 1:");
                            scanf("%d", &exit3);
                        }
                    }

                    //L'aide
                    case 4:
                    {
                        while(exit4 !== 1)
                        {

                            printf("\n\nPour retourner au menu tapez 1:");
                            scanf("%d", &exit4);
                        }
                    }
                    default:
                    {
                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nEntrez un chiffre valide, merci.");
                    }
                }
            }
        }
    }
}
