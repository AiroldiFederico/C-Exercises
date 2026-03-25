/*
Esercizio 1: La Matrice Trasposta (Inversione di indici)
Questo è un vero e proprio "must" per gli esami. La trasposta di una matrice si ottiene scambiando le sue righe con le sue colonne.

Obiettivo: Lavorare con matrici di dimensioni diverse e capire la relazione tra indici [i][j] e [j][i].

Nel main, dichiara una matrice di partenza 2x3 (2 righe, 3 colonne) e popolala.

Dichiara una seconda matrice vuota 3x2 (3 righe, 2 colonne) che conterrà il risultato.

Scrivi una funzione che riceve entrambe le matrici. La funzione deve leggere la prima matrice e salvare i valori nella seconda, in modo che la prima riga della matrice originale diventi la prima colonna della nuova, e così via.

Stampa la matrice finale per verificare il risultato.
*/


#include <stdio.h>
#define R 2
#define C 3

void calcTrasp(int arr1[][C], int arr2[][R]){
    for (int i = 0; i < C; i++){
        for (int j = 0; j < R; j++){
            arr2[i][j] = arr1[j][i];
        }
    }
}


int main(){

    int mtrx[R][C];
    int trsp[C][R];

    printf("Insert a matrix 2x3: \n");

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            scanf("%d", &mtrx[i][j]);
        }
    }

    //print matrix
    printf("Original matrix: \n");
    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            printf("%d\t", mtrx[i][j]);
        }
        printf("\n");
    }

    calcTrasp(mtrx, trsp);

    printf("Trasposta matrix: \n");
    for (int i = 0; i < C; i++){
        for (int j = 0; j < R; j++){
            printf("%d\t", trsp[i][j]);
        }
        printf("\n");
    }

    return 0;
}