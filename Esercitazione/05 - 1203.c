/*
Esercizio 2: Prodotto Righe per Colonne (L'incubo degli studenti)
Questa è probabilmente l'operazione sulle matrici più temuta, ma una volta capita la logica, ti darà un'enorme sicurezza. Non si tratta di moltiplicare numero per numero, ma di moltiplicare ogni riga della prima matrice per ogni colonna della seconda.

Obiettivo: Gestire tre cicli for annidati e l'accumulo di somme.

Crea una matrice A di dimensione 2x3 e una matrice B di dimensione 3x2.

Crea una matrice Risultato di dimensione 2x2 (che è il prodotto delle righe di A per le colonne di B), inizializzandola a zero.

Scrivi una funzione che esegue la moltiplicazione. Per calcolare l'elemento in posizione [0][0] del Risultato, devi moltiplicare il primo elemento della riga 0 di A per il primo elemento della colonna 0 di B, sommarlo al prodotto dei secondi elementi, e così via.

Suggerimento: Avrai bisogno di un ciclo i per le righe di A, un ciclo j per le colonne di B, e un ciclo interno k per scorrere gli elementi da moltiplicare e sommare.

*/



#include <stdio.h>

void calcMxM(int arr1[][3], int arr2[][2], int arr3[][2]){
    int prod = 0;
    for (int i = 0; i < 2; i++){ 
        for (int x = 0; x < 2; x++){
            for (int y = 0; y < 3; y++){
                prod += arr1[i][y] * arr2[y][x];
            }
            arr3[i][x] = prod;
            prod = 0;
        }
    }
}

int main(){

    int mtx1[2][3];
    int mtx2[3][2];
    int mtxRes[2][2] = {{0,0},{0,0}};

    printf("insert values for 2x3 matrix: \n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &mtx1[i][j]);
        }
    }

    printf("insert values for 3x2 matrix: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d", &mtx2[i][j]);
        }
    }
    
    calcMxM(mtx1,mtx2,mtxRes);
    
    printf("matrix result MxM: \n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d\t", mtxRes[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}