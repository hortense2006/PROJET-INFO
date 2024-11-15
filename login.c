//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include <options.h>
"include <accueil.h>
// CONNEXION DU JOUEUR A SON COMPTE
   int login()
   {
       // DEFINITION DES VARIABLES
       char user;
       char mdp;
       int essai;

       // NOM D'UTILISATEUR
       {
         for (essai = 0; essai < 3; essai++){
           printf("Saisissez votre nom d'utilisateur:\n");
           scanf("%c", &user);
            while (user != '\n'){
              if (user == '\n'){
                  printf("Votre nom d'utilisateur n'existes pas.\n");
                  essai = essai - 1;
              }
              else{
                 printf("Vous pouvez saisir votre mot de passe.\n");
                  printf("Saisissez votre mot de passe:\n");
                  scanf("%c", &mdp);
                  for (essai = 0; essai < 3; essai++){
                      printf("Saisissez votre mot de passe:\n");
                      scanf("%c", &mdp);
                      while (mdp != '\n'){
                          if (mdp == '\n'){
                              printf("Votre mot de passe est invalide.\n");
                              essai = essai - 1;
                          }
                          else{
                              printf("Vous etes connecte.\n");
                          }
                      }
                  printf("Vous n'avez plus d'essais disponibles.\n");
                  accueil();
                  }
              }
            }
            printf("Vous n'avez plus d'essais disponibles.\n");
         }
   return 0;
   }
#include "login.h"
