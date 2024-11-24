#include <stdio.h>
#include <stdlib.h>
#include "sauvegarde_du_pseudo.h"
int score(int S)
// S = BOUTON ON/OFF
{
    if(S==1)
    {
        int y = 25, ny = 0;
        char mT[3][1];
        int mTop[1][25];
        char mP[1][25];
        int mS[1][25];
        mT[0][0] = "Top";
        mT[1][0] = "Player";
        mT[2][0] = "Score";
        for (ny = 0; ny <= y; ny++)
        {
            mTop[0][ny] = ny +1;
            mP[1][ny] = "Pseudo"; //appelle pseudo
            ecriture_pseudo();
            mS[1][ny] = 0; //appelle score
            score();

        }
    }
}