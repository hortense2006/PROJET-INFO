#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "mainPlateau.h"
#include "freeplateau.h"
#include "createplateau.h"
#include "placementbarrière.h"
#include "affichagePlateau.h"
#include "NEOS.h"


// Taille par défaut du plateau
#define TPlat1 16
#define TPlat2 22

#define EMPTY 0
#define PLAYER_BASE 10
#define BARRIER_BASE 100


// Taile   Start    Joueur    pion    Direction
int mainPlateau(int T,int S, char BP, int J
      Joueurs1->pion_visu, Joueurs1->bari_visu, Joueurs1->pos_J,
      Joueurs2->pion_visu, Joueurs2->bari_visu, Joueurs2->pos_J,
      Joueurs3->pion_visu, Joueurs3->bari_visu, Joueurs3->pos_J,
      Joueurs4->pion_visu, Joueurs4->bari_visu, Joueurs4->pos_J)
{


    //Taille plateau
    if(T==TPlat1)
    {
        //Si premier tour donc START, initialisation des pions
        if(S==1)
        {
            // Création du plateau
            Plateau *plateau = createPlateau(TPlat1);

            if(j==2)
            {
                placementBarrier(Plateau *plateau,0,8,A,0,N)
                placementBarrier(Plateau *plateau,16,8,A,1,N)
            }
            if(j==4)
            {
                placementBarrier(Plateau *plateau,0,8,A,0,N)
                placementBarrier(Plateau *plateau,8,16,A,1,N)
                placementBarrier(Plateau *plateau,16,8,A,2,N)
                placementBarrier(Plateau *plateau,8,0,A,3,N)
            }
        }
    }

    //Taille plateau
    if(T==TPlat2)
    {
        //Si premier tour donc START, initialisation des pions
        if(S==1)
        {
            // Création du plateau
            Plateau *plateau = createPlateau(TPlat2);

            if(j==2)
            {
                placementBarrier(Plateau *plateau,0,11,A,0,N)
                placementBarrier(Plateau *plateau,22,11,A,1,N)
            }
            if(j==4)
            {
                placementBarrier(Plateau *plateau,0,11,A,0,N)
                placementBarrier(Plateau *plateau,11,22,A,1,N)
                placementBarrier(Plateau *plateau,22,11,A,2,N)
                placementBarrier(Plateau *plateau,11,0,A,3,N)
            }
        }
    }

    if(S==0)
    {
        switch(BP)
        {
            case 'B':
            {
                int x, y, d;
                if (joueur -> nbbarriere < 10 )
                {
                    printf("Vous pouvez placer une barriere.");
                    printf("Entrez les coordonnees x, y de la  barriere de votre choix:\n");
                    printf("Quelle est la direction d de la barriere N, O, E ou S ?\n");
                    scanf("%d%d%c",x,y,d);
                    printf("Quelles coordonnées x et y voulez vous\n");
                    placementBarrier(Plateau *plateau,x,y,d,joueur -> nbbarriere, J):
                    joueur->nbbarriere = joueur->nbbarriere + 1
                }
                break;
            }
            case 'A':
            {
                int x, y, d;
                printf("Quelles coordonnées x et y êtes vous\n");
                printf("Quelle est la direction d du deplacement du pion N, O, E ou S ?\n");
                scanf("%c",d);
                placementPion(Plateau *plateau,x,y,J,d):
                break;
            }
            break;
        }
    }
    // Affiche le plateau mis à jour
    affichagePlateau(Plateau *plateau, plateau->taille,
                  Joueurs1->pion_visu, Joueurs1->bari_visu, Joueurs1->pos_J,
                  Joueurs2->pion_visu, Joueurs2->bari_visu, Joueurs2->pos_J,
                  Joueurs3->pion_visu, Joueurs3->bari_visu, Joueurs3->pos_J,
                  Joueurs4->pion_visu, Joueurs4->bari_visu, Joueurs4->pos_J):
    }
    return 0;
}



