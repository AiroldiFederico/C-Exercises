/*
Data una matrice quadrata int M[N][N], copiare tutti i suoi elementi in un vettore lungo N2 secondo l’ordine esemplificato in figura
*/


#include <stdio.h>
#define N 6

int main() {
    int M[N][N] = {
        {  1,  2,  6,  7, 15, 16 },
        {  3,  5,  8, 14, 17, 26 },
        {  4,  9, 13, 18, 25, 27 },
        { 10, 12, 19, 24, 28, 33 },
        { 11, 20, 23, 29, 32, 34 },
        { 21, 22, 30, 31, 35, 36 }
    };

    int V[N*N]; // Il vettore risultato
    
    // Le nostre "coordinate" attuali
    int r = 0; 
    int c = 0;
    
    // La direzione: 1 = stiamo andando SU (Up-Right), 0 = stiamo andando GIÙ (Down-Left)
    // Guardando l'immagine, dopo l'1 si va verso il 2 (destra), poi subito giù-sinistra.
    // In realtà il primo passo è speciale, ma possiamo vedere la sequenza come diagonali.
    // Diagonale 1 (solo 1): finita. 
    // Diagonale 2 (2->3): Giù-Sinistra.
    // Diagonale 3 (4->5->6): Su-Destra.
    int up = 1; // Iniziamo supponendo di voler salire (o gestire il primo rimbalzo)

    // Un solo ciclo per riempire tutto il vettore
    for (int i = 0; i < N*N; i++) {
        
        // 1. Copiamo il valore corrente
        V[i] = M[r][c];

        // 2. Calcoliamo la PROSSIMA posizione
        if (up) { 
            // --- STIAMO ANDANDO SU-DESTRA (↗) ---
            if (c == N - 1) { 
                // Caso critico: Ho sbattuto a DESTRA (es. numero 6 o 16)
                r++;        // Scendo di una riga
                up = 0;     // Inverto: ora si scende
            } 
            else if (r == 0) {
                // Caso critico: Ho sbattuto in ALTO (es. numero 1 o 15)
                c++;        // Vado a destra
                up = 0;     // Inverto: ora si scende
            } 
            else {
                // Movimento normale diagonale SU
                r--;
                c++;
            }
        } 
        else { 
            // --- STIAMO ANDANDO GIÙ-SINISTRA (↙) ---
            if (r == N - 1) {
                // Caso critico: Ho sbattuto in BASSO (es. numero 21 o 35)
                c++;        // Vado a destra
                up = 1;     // Inverto: ora si sale
            } 
            else if (c == 0) {
                // Caso critico: Ho sbattuto a SINISTRA (es. numero 3 o 10)
                r++;        // Scendo di una riga
                up = 1;     // Inverto: ora si sale
            } 
            else {
                // Movimento normale diagonale GIÙ
                r++;
                c--;
            }
        }
    }

    // Stampa risultato
    printf("Vector: \n");
    for (int i = 0; i < N*N; ++i) {
        printf("%d ", V[i]);
    }
    printf("\n");

    return 0;
}