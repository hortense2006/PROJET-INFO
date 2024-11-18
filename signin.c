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
    int user, chiffreb, chiffrec;
    char mdp;
    // PSEUDO
    printf("Choisissez un pseudo:\n");
    scanf("%d", &user);
    while (user != '\0'){
        if (user == '\0') // on vérifie si le pseudo existe déjà.
            {
          printf("Votre nom d'utilisateur a ete enregistre.\n");
          }
        else {
            printf("Ce nom existe deja. Est-ce vous ?\n");
            printf("1 = Oui.                 2 = Non.\n");
            printf("Selectionner soit 1 soit 2:\n");
            scanf("%d", &chiffreb);
            switch (chiffreb){
               case 1:{
                    printf("Voulez-vous vous connecter ?\n");
                    printf("1 = Oui.                2 = Non.\n");
                    switch (chiffrec){
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
