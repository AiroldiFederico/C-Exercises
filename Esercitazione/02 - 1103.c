/*
Obiettivo: Matrici, costrutti condizionali e iterativi, sottoprogrammi.
Scrivi un programma che:

Dichiari una matrice quadrata 4x4 di numeri interi (puoi farli inserire all'utente o inserirli "hardcoded" nel codice per testare più in fretta).

Usi una funzione che riceve la matrice e calcola la somma degli elementi sulla diagonale principale (gli elementi dove l'indice di riga è uguale all'indice di colonna).

Usi una seconda funzione che conta quanti numeri pari e quanti numeri dispari ci sono nell'intera matrice, stampando poi il risultato a schermo.

*/


#include <stdio.h>
#define D 4

struct Stats{
    int sumD;
    int countEven;
    int countOdds;
};

struct Stats countEvenOdds(int arr[][D], int dimension){
    struct Stats count;
    count.countEven = 0;
    count.countOdds = 0;
    count.sumD = 0;
    for (int i = 0; i < dimension; i++){
        for (int j = 0; j < dimension; j++){
            if(arr[i][j]%2 == 0){count.countEven++;}
            else{count.countOdds++;}
            if(i == j){count.sumD += arr[i][j];}
        }
    }
    return count;
}

int main(){
    int mtx[D][D];
    printf("Inser values for 4x4 matrix: \n");
    for (int i = 0; i < D; i++){
        for (int j = 0; j < D; j++){
            scanf("%d", &mtx[i][j]);
        }
    }
    struct Stats result = countEvenOdds(mtx, D);
    printf("Sum of diagonal value: %d, Even number: %d, Odds number: %d", result.sumD, result.countEven, result.countOdds);
    return 0;
}