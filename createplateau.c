#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "mainPlateau.h"
#include "freeplateau.h"
#include "createplateau.h"
#include "placementbarrière.h"
#include "affichagePlateau.h"
#include "NEOS.h"

typedef struct
{
    int **grille;
    int taille;
} Plateau;

// Crée une matrice pour le plateau
Plateau *createPlateau(int taille)
{
    Plateau *plateau = (Plateau *)malloc(sizeof(Plateau)); // on alloue de la place dans le plateau.
    plateau->taille = taille;
    plateau->grille = (int **)malloc(taille * sizeof(int *)); // on spécifie l'espace alloué à le case dans le plateau.
    for (int i = 0; i < taille; i++)
    {
        plateau->grille[i] = (int *)calloc(taille, sizeof(int)); // on appelle la case du plateau choisie.
    }
    return plateau;
}
