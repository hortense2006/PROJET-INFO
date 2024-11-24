//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include "accueil.h"
#include "login.h"
#include "menu.h"
#include "lecture_pseudo.h"
#include "lecture_mdp.h"
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
           if (user == '\0'&& user != lecture_pseudo()){
// le programme est supposé vérifier si le joueur a rien entré, ou alors si le pseudo est déjà enregistré.
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
                      if (mdp == '\0' || mdp != lecture_mdp()){
// le programme est supposé vérifier si le joueur n'a rien entré, ou alors si le mot de passe ne correspond pas au pseudo donné.
                          printf("Votre mot de passe est invalide.\n");
                          essai = essai - 1;
                      }
                      else{
                          printf("Vous etes connecte.\n");
                          menu();
                      }
                  printf("Vous n'avez plus d'essais disponibles.\n");
              }
            }
            printf("Vous n'avez plus d'essais disponibles.\n");
         }
   return 0;
   }

