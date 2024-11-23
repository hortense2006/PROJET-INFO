//
// Created by galti on 15/11/2024.
//
#include <stdio.h>
#include "reprendre une partie.h"
#include "lecture_plateau.h"
#include "tour_du_joueur.h"
int reprendre_une_partie(){
// APPEL PLATEAU
lecture_plateau();
// APPEL PLACEMENTS DES BARRIERES DANS LA BASE DE DONNEES
// APPEL DE L'ORDRE DES JOUEURS + QUI DOIT JOUER
tour();
}

