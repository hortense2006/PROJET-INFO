//
// Created by galti on 15/11/2024.
//
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
            switch (chiffrea) {
              case 1: {
                login();
                break;
              }
              default: {
                accueil();
                break;
              }
            }
        break;
        }
        case 2: {
            printf("Voulez-vous créer un compte ?\n");
            printf("1 = Oui.                       2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffrea);
            switch (chiffrea) {
              case 1: {
                signin();
                break;
              }
              default: {
                break;
              }
            break;
            }
        }
        default :{
            printf("Erreur\n");
            accueil();
        }
    }
}