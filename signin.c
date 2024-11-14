//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
// CREATION D'UN COMPTE
    int signin()
    {
        // DEFINITION DES VARIABLES
        int user;
        char mdp;
        // PSEUDO
        printf("Choisissez un pseudo:\n");
        scanf("%d", &user);
        if (user == //base de données); // on vérifie si le pseudo existe déjà.
            {
                printf("Ce nom existe deja\n");
                printf("Est-ce vous ?");
                if (1) { //1 est vrai
                    int login();
                }
               if (0) { //O est faux
                   printf("Vous devez choisir un autre pseudo.");
                   int signin();
               }
            }
        else {
            printf("Votre nom d'utilisateur a ete enregistre.");
        }

        // MOT DE PASSE
        printf("Choisissez à présent un mot de passe.");
            if (mdp < 12 && mdp > 12)  {
                printf("Votre mot de passe n'as pas 12 caracteres.");
            }
            else {
                printf("Votre mot de passe a été enregistré.");
            }
    }
#include "signin.h"
