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
    scanf("%c", &user);
    if (user !== '\0' && // !==nom deja utilise){
        printf("Votre nom d'utilisateur a ete enregistre.\n");
        printf("Choisissez a present un mot de passe.\n");
        scanf("%c", &mdp);
          if (mdp < 12 && mdp > 12)  {
                  printf("Votre mot de passe n'as pas 12 caracteres.");
             }
             else {
                 printf("Votre mot de passe a été enregistré.");
             }
        } // on vérifie si le pseudo existe déjà.
    else {
        printf("Ce nom existe deja. Est-ce vous ?\n");
        printf("1 = Oui.                 2 = Non.\n");
        printf("Selectionner soit 1 soit 2:\n");
        scanf("%d", &chiffreb);
            if (chiffreb == 1){
              login();
            }
            else{
              printf("Vous devez saisir un nouveau nom d'utilisateur.\n");
            }
        }
    }
 return 0;
}
