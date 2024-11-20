//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include "login.h"
#include "signin.h"
// CREATION D'UN COMPTE
int signin()
{
    // DEFINITION DES VARIABLES
    int user, chiffreb;
    char mdp;
    // PSEUDO
    printf("Choisissez un pseudo:\n");
    scanf("%d", &user);
        if (user == '\0'){
          printf("Votre nom d'utilisateur a ete enregistre.\n");
        } // on vérifie si le pseudo existe déjà.
        else {
            printf("Ce nom existe deja. Est-ce vous ?\n");
            printf("1 = Oui.                 2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d", &chiffreb);
            if (chiffreb == 1){}
            else if (chiffreb == 2){}
          }
        else {


            switch (chiffreb){
               case 1:{
                    printf("Voulez-vous vous connecter ?\n");
                    printf("1 = Oui.                2 = Non.\n");
                    switch (chiffreb){
                      case 1:{
                        login();
                        break;
                      }
                        default:{
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
 return 0;
}
