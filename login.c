//
// Created by galti on 14/11/2024.
//
#include <stdio.h>
#include <options.h>
// CONNEXION DU JOUEUR A SON COMPTE
   int login()
   {
       // DEFINITION DES VARIABLES
       char user;
       char mdp;

       // NOM D'UTILISATEUR
       int user()
       {
       printf("Saisissez votre nom d'utilisateur:\n");
       scanf("%c", &user);
       if (user // est dans base de donnees){
               printf("Vous pouvez saisir votre mot de passe\n");
        else {
               printf("Le nom d'utilisateur n'existes pas.\n");
        }
       }
       int mdp(){
       printf("Saisissez votre mot de passe:\n");
       scanf("%c", &mdp);
       // SI LE MOT DE PASSE N'EXISTES PAS, LE DIRE
       }
   return 0;
   }
#include "login.h"
