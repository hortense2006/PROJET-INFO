#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "mainPlateau.h"
#include "freeplateau.h"
#include "createplateau.h"
#include "placementbarrière.h"
#include "affichagePlateau.h"

typedef struct
{
    int **grille;
    int taille;
} Plateau;

// Crée une matrice pour le plateau
Plateau *createPlateau(int taille)
{
    Plateau *plateau = (Plateau *)malloc(sizeof(Plateau));
    plateau->taille = taille;
    plateau->grille = (int **)malloc(taille * sizeof(int *));
    for (int i = 0; i < taille; i++)
    {
        plateau->grille[i] = (int *)calloc(taille, sizeof(int));
    }
    return plateau;
}
