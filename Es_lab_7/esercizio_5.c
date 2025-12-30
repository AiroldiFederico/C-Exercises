/*
Es5: In un concorso di bruttezza, N giudici esprimono il loro giudizio su M candidati. Il giudizio è un valore numerico tra 0 e 5 (più altro il voto più brutto il candidato). I risultati sono organizzati in una matrice int R[N][M].
Si scriva un programma in linguaggio C per determinare il candidato più brutto ed il giudice più cattivo (ovvero quello che attribuisce i più alti voti di bruttezza).

*/

#include <stdio.h>

int main( void ){
    int M[5][6]={
        {1,2,0,4,0,0},
        {1,4,3,4,4,4},
        {1,2,3,4,4,4},
        {5,5,3,4,4,5},
        {1,1,3,1,1,4},
    };
    int M2[6][5];

    int Cand[6]={};
    int Giud[5]={};
    int som = 0;
    int numC = 0;
    int numC2 = 0;

    //trasposta
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            M2[j][i] = M[i][j];
        }
    }


    //Somma voti
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            som += M2[i][j];
        }

        Cand[i] = som;
        som = 0;
    }

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            som += M[i][j];
        }

        Giud[i] = som;
        som = 0;
    }

    printf("\n");
    for (int i = 0; i < 6; ++i)
    {
        int grt = Cand[0];
        
        if (Cand[i] > grt){
            grt = Cand[0];
            numC = i;
        }
        
    }

    for (int i = 0; i < 6; ++i)
    {
        int grt = Giud[0];
        
        if (Giud[i] > grt){
            grt = Cand[0];
            numC2 = i;
        }
        
    }

    printf("Ugliest candidate is cand number %d\n", numC);
    printf("Judge with highest votes is the number %d", numC2);

    return 0;

}