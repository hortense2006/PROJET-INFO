//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include <options.h>
// CONNEXION DU JOUEUR A SON COMPTE
   int login()
   {
       // DEFINITION DES VARIABLES
       int user;
       char mdp;
       printf("Saisissez votre nom d'utilisateur:\n");
       scanf("%d", &user);
       printf("Saisissez votre mot de passe:\n");
       scanf("%c", &mdp);
       options();
   return 0;
   }
#include "login.h"
