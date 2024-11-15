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
    int chiffreaa, chiffreab;
    printf("Bienvenue dans le jeu Quoridor!\n");

    // OPTIONS DE CONNEXION
    printf(" 1 = Log in\n");
    printf("2 = Sign in\n");
    printf("Selectionner soit 1 soit 2:\n");
    scanf("%d",&chiffrea);
    switch (chiffrea) {
        case 1: {
            printf("Voulez vous vous connecter ?\n");
            printf("1 = Oui.\n");
            printf("2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffreaa);
            switch (chiffreaa) {
              case 1: {
                login();
                break;
              }
              case 2: {
                accueil();
                break;
              }
              default: {
                printf("Erreur!\n");
                break;
              }
            }
            break;
        }
        case 2: {
            printf("Voulez-vous créer un compte ?\n");
            printf("1 = Oui.\n");
            printf("2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d",&chiffreab);
            switch (chiffreab) {
              case 1: {
                signin();
                break;
              }
              case 2: {
                accueil();
                break;
              }
              default: {
                printf("Erreur!\n");
                break;
              }
            break;
        }
        default :{
            printf("Erreur\n");
            accueil();
        }
    }
#include "accueil.h"
