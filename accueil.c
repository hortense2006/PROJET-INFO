//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include <signin.h>
#include <login.h>
int accueil()
{
    // DEFINITION DES VARIABLES
    int chiffrea;
    printf("Bienvenue dans le jeu Quoridor!\n");

    // OPTIONS DE CONNEXION
    printf(" 1 = Log in\n");
    printf("2 = Sign in\n");
    switch (chiffrea) {
        case 1: {
            printf("Voulez vous vous connecter ?\n");
            login();
            break;
        }
        case 2: {
            printf("Voulez-vous créer un compte ?\n");
            signin();
            break;
        }
        default :{
            printf("Erreur\n");
            accueil();
        }
    }
#include "accueil.h"
