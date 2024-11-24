#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "mainPlateau.h"
#include "freeplateau.h"
#include "createplateau.h"
#include "placementbarrière.h"
#include "affichagePlateau.h"
#include "NEOS.h"

#define EMPTY 0
#define PLAYER_BASE 10
#define BARRIER_BASE 100

// Affiche le plateau avec ncurses
void affichagePlateau(Plateau *plateau, plateau->taille,
                      Joueurs1->pion_visu, Joueurs1->bari_visu, Joueurs1->pos_J, Joueurs1->nb_barrires,
                      Joueurs2->pion_visu, Joueurs2->bari_visu, Joueurs2->pos_J, Joueurs2->nb_barrires,
                      Joueurs3->pion_visu, Joueurs3->bari_visu, Joueurs3->pos_J, Joueurs3->nb_barrires,
                      Joueurs4->pion_visu, Joueurs4->bari_visu, Joueurs4->pos_J, Joueurs4->nb_barrires,)
{
    clear();
    for (int i = 0; i < plateau->taille; i++)
    {
        for (int j = 0; j < plateau->taille; j++)
        {
            switch(plateau->plateau[i][j])
            {
                const char *red = "\033[31m";
                const char *green = "\033[32m";
                const char *yellow = "\033[33m";
                const char *blue = "\033[34m";
                const char *reset = "\033[0m";
                case EMPTY:
                {
                    printf("  ")
                    break;
                }
                case PLAYER_BASE+Joueurs1->pos_J:
                {
                    printf("%s%c%s\n", Joueurs1->pion_visu, red, reset);
                    break;
                }
                case PLAYER_BASE+Joueurs2->pos_J:
                {
                    printf("%s%c%s\n", Joueurs2->pion_visu, blue, reset);
                    break;
                }
                case PLAYER_BASE+Joueurs3->pos_J:
                {
                    printf("%s%c%s\n", Joueurs3->pion_visu, green, reset);
                    break;
                }
                case PLAYER_BASE+Joueurs4->pos_J:
                {
                    printf("%s%c%s\n", Joueurs4->pion_visu, yellow, reset);
                    break;
                }


                const char *RC = "\033[91m";
                const char *GC = "\033[92m";
                const char *YC = "\033[93m";
                const char *BC = "\033[94m";
                case BARRIER_BASE*Joueurs1->pos_J+Joueurs1->nb_barrires-1:
                {
                    printf("%s%c%s\n", Joueurs1->bari_visu, RC, reset);
                    break;
                }
                case BARRIER_BASE*Joueurs2->pos_J+Joueurs2->nb_barrires-1:
                {
                    printf("%s%c%s\n", Joueurs2->bari_visu, BC, reset);
                    break;
                }
                case BARRIER_BASE*Joueurs3->pos_J+Joueurs3->nb_barrires-1:
                {
                    printf("%s%c%s\n", Joueurs3->bari_visu, GC, reset);
                    break;
                }
                case BARRIER_BASE*Joueurs4->pos_J+Joueurs4->nb_barrires-1:
                {
                    printf("%s%c%s\n", Joueurs4->bari_visu, YC, reset);
                    break;
                }
                break;
            }
        }
    }
    refresh();
}