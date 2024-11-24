//
// Created by galti on 25/11/2024.
//

#include "accueil.h"
#include <stdio.h>
#include "signin.h"
#include "login.h"
#include "accueil.h"
int accueil()
{
    // DEFINITION DES VARIABLES
    int chiffrea;

    printf("Bienvenue dans le jeu Quoridor!\n");

    // OPTIONS DE CONNEXION
    printf(" 1 = Log in.                   2 = Sign in\n");
    printf("Selectionner soit 1 soit 2:\n");
    scanf("%d",&chiffrea);
    switch (chiffrea) {
        case 1: {
            printf("Voulez vous vous connecter ?\n");
            printf("1 = Oui.                   2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffrea);
            if (chiffrea == 1) {
              login();
            }
        break;
        }
        case 2: {
            printf("Voulez-vous créer un compte ?\n");
            printf("1 = Oui.                       2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffrea);
            if (chiffrea == 1) {
              signin();
            }
        default :{
            printf("Erreur\n");
        }
    }
      // on définit une structure pour chaque joueur, afin d'associer au joueur toutes les variables le concernant.
      struct joueur1{
        int user;
        int mdp;
      }
      struct joueur2{
        int user;
        int mdp;
      }
      struct joueur3{
       int user;
       int mdp;
      }
      struct joueur4{
        int user;
        int mdp;
      }
return 0;
}