//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include <login.h>
// CREATION D'UN COMPTE
    int signin()
    {
        // DEFINITION DES VARIABLES
        int user, chiffreb, chiffrec;
        char mdp;
        // PSEUDO
        printf("Choisissez un pseudo:\n");
        scanf("%d", &user);
        if (user == //base de données); // on vérifie si le pseudo existe déjà.
            {
                printf("Ce nom existe deja\n");
                printf("Est-ce vous ?");
                printf("1 = Oui\n");
                printf("2 = Non\n");
                switch (chiffreb){
                  case 1:{
                    printf("Voulez-vous vous connecter ?\n");
                    printf("1 = Oui\n");
                    printf("2 = Non\n");
                    switch (chiffrec){
                      case 1:{
                        login();
                        break;
                      }
                      case 2:{
                        signin();
                        break;
                      }
                        default:{
                          printf("Erreur!\n");
                          signin();
                          break;
                        }
                    }
                    break;
                    }
                  case 2:{
                    printf("Vous devez choisir un autre pseudo.\n");
                    signin();
                    break;
                    }
                  default:{
                    printf("Erreur\n");
                    signin();
                    break;
                  }
                }
            }
        else {
            printf("Votre nom d'utilisateur a ete enregistre.", user);
        }

        // MOT DE PASSE
        printf("Choisissez à présent un mot de passe.");
            if (mdp < 12 && mdp > 12)  {
                printf("Votre mot de passe n'as pas 12 caracteres.");
            }
            else {
                printf("Votre mot de passe a été enregistré.");
            }
         // ASSOCIE LE MOT DE PASSE, LE NOM DU JOUEUR ET SON SCORE.
        struct Joueur
            {
                int mdp, user, score;
            }
    }
#include "signin.h"
