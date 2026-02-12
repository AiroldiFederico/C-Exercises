/*
Si consideri la spesa al supermercato dove ogni
articolo comprato è caratterizzato da un codice, un
prezzo e un eventuale sconto espresso in percentuale
(che potrebbe essere 0). Si scriva un programma C non
scomposto in sottoprogrammi che permetta di:
 memorizzare le informazioni di ogni articolo
acquistato in una variabile strutturata opportuna
 inserire da tastiera una sequenza a priori illimitata
di articoli comprati (la sequenza termina quando
viene inserito il valore -1 come codice di un articolo,
tale codice ovviamente non fa parte della sequenza).
 Calcolare e stampare il numero di articoli scontati
acquistati e la spesa totale. 

*/

/*
ARTICOLO: codice, prezzo, sconto
*/

#include <stdio.h>

// 1. DEFINIZIONE DELLA STRUCT
// Qui stiamo solo dicendo al compilatore "com'è fatta" la nostra scatola.
// Non stiamo ancora creando variabili.
struct Articolo {
    int codice;
    float prezzo;
    float sconto; // Percentuale (es. 20 per 20%)
};

int main() {
    // 2. DICHIARAZIONE DELLA VARIABILE
    // Ora creiamo la variabile "item" che useremo per ogni inserimento.
    struct Articolo item; 

    // Variabili per i totali
    float spesa_totale = 0.0;
    int contatore_scontati = 0;
    
    printf("Inserisci gli articoli (codice, prezzo, sconto).\n");
    printf("Inserisci codice -1 per terminare.\n");

    // 3. IL CICLO INFINITO
    // Usiamo un ciclo che continua finché non lo rompiamo noi col break
    while(1) {
        
        printf("\nInserisci Codice: ");
        scanf("%d", &item.codice); // Nota: &item.codice, come fare &n

        // CONTROLLO DI USCITA
        // Se il codice è -1, dobbiamo fermarci SUBITO, prima di chiedere prezzo e sconto.
        if (item.codice == -1) {
            break; 
        }

        printf("Inserisci Prezzo: ");
        scanf("%f", &item.prezzo);

        printf("Inserisci Sconto (%%): ");
        scanf("%f", &item.sconto);

        // 4. ELABORAZIONE DATI
        // Calcoliamo il prezzo scontato
        float prezzo_finale;
        float importo_sconto = (item.prezzo * item.sconto) / 100.0;
        prezzo_finale = item.prezzo - importo_sconto;

        // Aggiungiamo al totale
        spesa_totale += prezzo_finale;

        // Controlliamo se era scontato
        if (item.sconto > 0) {
            contatore_scontati++;
        }
    }

    // 5. STAMPA FINALE
    printf("\n--- SCONTRINO ---\n");
    printf("Articoli scontati acquistati: %d\n", contatore_scontati);
    printf("Spesa totale: %.2f euro\n", spesa_totale);

    return 0;
}