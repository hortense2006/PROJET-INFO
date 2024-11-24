#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "mainPlateau.h"
#include "freeplateau.h"
#include "createplateau.h"
#include "placementbarrière.h"
#include "affichagePlateau.h"
#include "NEOS.h"

// Libère la mémoire du plateau
void freePlateau(Plateau *plateau)
{
    for (int i = 0; i < plateau->taille; i++)
    {
        free(plateau->grille[i]);
    }
    free(plateau->grille);
    free(plateau);
}
