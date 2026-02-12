/*

Si scriva un programma non scomposto in sottoprogrammi per
calcolare la media dei voti sufficienti riportati da una classe di
studenti all'esame di Programmazione I.
Il programma dovrà leggere coppie di numeri e memorizzarle in un
array di apposite struct.
Ciascuna coppia è composta dal voto (tra 18 e 31) e dal numero di
studenti che hanno riportato quel voto e la sequenza termina dopo
aver letto al massimo le 14 coppie (anche non in ordine) oppure
quando si introduce un voto pari a -1.
Per esempio, una sequenza di coppie potrebbe essere:
 <18, 1>, <19, 2>, <26, 9>, -1
 che indica che uno studente ha riportato voto 18,
 2 studenti hanno riportato voto 19 e
 9 studenti hanno riportato voto 26.
 In questo caso il programma dovrebbe stampare il
 valore 24.16 come media complessiva dei voti.
 L'array da utilizzare deve contenere delle struct
 composte da un campo voto e da un campo num_studenti.

*/






#include <stdio.h>

struct Risultato {
    int voto;
    int numeroStudenti;
};

int main() {
    // 1. Dichiariamo un ARRAY DI STRUCT (non una matrice di interi)
    struct Risultato registro[14]; 
    
    int i;
    int elementi_inseriti = 0; // Serve per sapere dove fermarci nei cicli successivi

    // --- INPUT ---
    for (i = 0; i < 14; i++) {
        int v_temp;
        printf("Inserisci voto (-1 per terminare): ");
        scanf("%d", &v_temp);

        // Controllo uscita immediata
        if (v_temp == -1) {
            break;
        }

        // Salviamo il voto nella struct dentro l'array
        registro[i].voto = v_temp;

        printf("Quanti studenti hanno preso %d? ", v_temp);
        scanf("%d", &registro[i].numeroStudenti);
        
        elementi_inseriti++; // Teniamo il conto di quante celle abbiamo riempito
    }

    // --- CALCOLO ---
    int sommaProdotti = 0; // Somma di (voto * numero)
    int sommaStudenti = 0; // Somma totale delle teste

    printf("\n--- Riepilogo ---\n");
    for (i = 0; i < elementi_inseriti; i++) {
        printf("Voto: %d, Studenti: %d\n", registro[i].voto, registro[i].numeroStudenti);
        
        // CORREZIONE MATEMATICA: Media Ponderata
        sommaProdotti += (registro[i].voto * registro[i].numeroStudenti);
        sommaStudenti += registro[i].numeroStudenti;
    }

    // Evitiamo la divisione per zero se non ci sono studenti
    if (sommaStudenti > 0) {
        // CORREZIONE TIPO: Casting a float per avere i decimali
        float media = (float)sommaProdotti / sommaStudenti;
        printf("\nTotale voti ponderati: %d", sommaProdotti);
        printf("\nTotale studenti: %d", sommaStudenti);
        printf("\nMedia della classe: %.2f\n", media);
    } else {
        printf("\nNessun dato inserito.\n");
    }

    return 0;
}