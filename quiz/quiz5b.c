#include<stdio.h>
#define N 4 // Righe
#define M 3 // Colonne

int main(){
    int l;
    int m[N][M];
    int ok = 0; // 0 = KO, 1 = OK
    
    // 1. ACQUISIZIONE DATI
    scanf("%d", &l);
    
    // Leggiamo la matrice normalmente (riga per riga)
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%d", &m[i][j]);
        }
    }
    
    // 2. ANALISI PER COLONNE
    // Nota: i scorre le colonne (da 0 a M)
    for(int i=0; i<M; i++){ 
        
        int contatore = 1;      // Lunghezza sequenza attuale (minimo 1 numero)
        int diff_precedente = 0;// Memorizza il passo (es. +2 o -3)
        
        // j scorre le righe. Ci fermiamo a N-1 perché facciamo confronti a coppie (j e j+1)
        for(int j=0; j < N-1; j++){
            
            // Calcolo la differenza tra il numero sotto e quello attuale
            // Ricorda: m[riga][colonna] -> m[j][i]
            int diff_attuale = m[j+1][i] - m[j][i];
            
            if (j == 0) {
                // È la prima coppia della colonna, la prendiamo per buona
                diff_precedente = diff_attuale;
                contatore = 2; // Abbiamo 2 numeri con questa differenza
            } 
            else if (diff_attuale == diff_precedente) {
                // La differenza continua a essere uguale!
                contatore++;
            } 
            else {
                // La differenza è cambiata. La sequenza si spezza.
                // Ripartiamo da 2 (l'attuale coppia j e j+1 è valida di per sé)
                contatore = 2;
                diff_precedente = diff_attuale; // Aggiorniamo la nuova differenza da cercare
            }
            
            // Controllo immediato: abbiamo raggiunto la lunghezza L?
            if (contatore >= l) {
                ok = 1;
            }
        }
    }
    
    // 3. OUTPUT
    if(ok == 1) printf("OK");
    else printf("KO");
    
    return 0;
}