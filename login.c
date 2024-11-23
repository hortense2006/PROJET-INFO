//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include "accueil.h"
#include "login.h"
#include "menu.h"
#include "ecriture_pseudo.h"
#include "ecriture_mdp.h"
// CONNEXION DU JOUEUR A SON COMPTE
   int login()
   {
       // DEFINITION DES VARIABLES
       char user, mdp, essai;

       // NOM D'UTILISATEUR
       {
         for (essai = 0; essai < 3; essai++){
           printf("Saisissez votre nom d'utilisateur:\n");
           scanf("%c", &user);
           if (user == '\0'&& user != ecriture_pseudo()){
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
                      if (mdp == '\0' || mdp != ecriture_mdp()){
                          printf("Votre mot de passe est invalide.\n");
                          essai = essai - 1;
                      }
                      else{
                          printf("Vous etes connecte.\n");
                          menu();
                      }
                  printf("Vous n'avez plus d'essais disponibles.\n");
                  accueil();
              }
            }
            printf("Vous n'avez plus d'essais disponibles.\n");
            accueil();
         }
   return 0;
   }

