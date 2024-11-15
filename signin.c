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
        while (user != '\n')
        if (user == '\n') // on vérifie si le pseudo existe déjà.
            {
          printf("Votre nom d'utilisateur a ete enregistre.\n");
          }
        else {
            printf("Ce nom existe deja\n");
            printf("Est-ce vous ?");
            printf("1 = Oui\n");
            printf("2 = Non\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d", &chiffreb);
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
        }

        // MOT DE PASSE
        printf("Choisissez à présent un mot de passe.");
        scanf("%c", &mdp);
            if (mdp < 12 && mdp > 12)  {
                printf("Votre mot de passe n'as pas 12 caracteres.");
            }
            else {
                printf("Votre mot de passe a été enregistré.");
            }
         // ASSOCIE LE MOT DE PASSE, LE NOM DU JOUEUR ET SON SCORE.
        struct Joueur
            {
                char mdp, user;
                int score;
                scanf("%c""%c""%d",&joueur.mdp, &joueur.user, &joueur.score);
            }
    }
 return 0;
}
#include "signin.h"