//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include "login.h"
#include "signin.h"
#include "ecriture_pseudo.h"
#include "ecriture_mdp.h"
// CREATION D'UN COMPTE
int signin()
{
    // DEFINITION DES VARIABLES
    int user, chiffreb;
    char mdp;
    // PSEUDO
    printf("Choisissez un pseudo:\n");
    scanf("%c", &user);
    if (user < 1 || user > 20){
      printf("Votre pseudo n'a pas le nombre de caracteres requis.\n");
    }
    else{
        if (user !== '\0' && user != ecriture_pseudo(){ // si le joueur n'a rien entré, ou si le nom d'utilisateur n'est pas déjà utilisé.
         printf("Votre nom d'utilisateur a ete enregistre.\n");
          ecriture_pseudo();
         printf("Choisissez a present un mot de passe.\n");
         scanf("%c", &mdp);
           if (mdp < 1 && mdp > 12)  {
                   printf("Votre mot de passe n'as pas 12 caracteres.");
              }
           else {
               printf("Votre mot de passe a été enregistré.");
               ecriture_mdp();
         }
          // on vérifie si le pseudo existe déjà.
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
 return 0;
}
