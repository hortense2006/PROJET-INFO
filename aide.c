#include <stdio.h>
#include "aide.h"
#include "déplacement du pion.h"
#include "positionnement d'une barrière.h"
#include "annuler son tour.h"
#include "passer son tour.h"
#include "options.h"

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

int  options()
{
    // DEFINITION DES VARIABLES
    int options, pion = 1, barrieres = 2, passer = 3, annuler = 4, chiffre1;

    // PRESENTATION DES OPTIONS DE JEU
    printf("Voici vos options de jeu :\n");
    printf("1= Deplacer votre pion.                    2= Poser une barriere.\n");
    printf("3= Annuler votre coup precedent.            4= Passer votre tour.\n");

    // CHOISIR UN CHIFFRE RELIE A UNE OPTION DE JEU
    printf("Selectionner un chiffre entre 1 et 4 :");
    scanf("%d",&chiffre1);

    // DETERMINER L'OPTION CHOISIE EN FONCTION DU CHIFFRE SAISI
    switch (chiffre1) {
        case 1: {
            printf("Souhaitez-vous deplacer votre pion ?\n");
            printf("1= Oui.                  2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffre1);
          if (chiffre1 == 1) {
            printf("Vous voulez deplacer votre pion.\n");
              pion();
          }
          else {
            printf("Erreur!\n");
          }
        break;
        }
        case 2: {
            printf("Souhaitez-vous poser une barriere ?\n");
            printf("1= Oui.              2= Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffre1);
            if (chiffre1 == 1) {
                printf("Vous voulez poser une barriere.\n");
                barrieres();
            }
            else {
                printf("Erreur!\n");
            }
        break;
        }
        case 3: {
            printf("Souhaitez-vous passer votre tour ?\n");
            printf("1= Oui.                  2= Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffre1);
            if (chiffre1 == 1) {
                printf("Vous vouler passer votre tour.\n");
                passer();
            }
            else {
                printf("Erreur!\n");
            }
        break;
        }
        case 4: {
            printf("Souhaitez-vous annuler votre coup precedent ?\n");
            printf("1= Oui.               2= Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffre1);
            if (chiffre1 == 1) {
                printf("Vous vouler annuler votre tour precedent.\n");
                annuler();
            }
            else {
                printf("Erreur!\n");
            }
        }
        default : {
            printf("Erreur\n");
            break;
        }
    }
    return 0;
}





