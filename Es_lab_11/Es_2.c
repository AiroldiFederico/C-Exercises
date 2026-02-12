/*
Scrivere un programma C in grado di seguire le
seguenti specifiche:
 richiede all’utente 10 numeri interi non negativi
nell’intervallo [0,10] e li memorizza in un array.
 Calcola la media dei voti inseriti.
 Calcola la moda dei voti inseriti.
 La moda è il valore che compare più
frequentemente. In caso ci siano più numeri con la
stessa frequenza ritornare uno qualsiasi di essi.
 Usare un array aggiuntivo per memorizzare le
frequenze.
*/


#include <stdio.h>
#define N 10

int main() {

    int arr[N];
    int fre[N];
    float media;
    int somma = 0;

    printf("Inserisci %d numeri interi (0-10):\n", N);

    // --- INPUT ---
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // --- CALCOLO SOMMA ---
    for (int i = 0; i < N; i++) {
        somma += arr[i];
    }

    // --- CALCOLO FREQUENZE ---
    // (Il tuo metodo va bene: conti quante volte arr[i] appare in tutto l'array)
    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        fre[i] = count; 
    }

    // --- STAMPA DI DEBUG (Utile per capire!) ---
    printf("\nNumeri:    ");
    for(int i=0; i<N; i++) printf("%d ", arr[i]);
    printf("\nFrequenze: ");
    for(int i=0; i<N; i++) printf("%d ", fre[i]);

    // --- RICERCA DEL MASSIMO (MODA) ---
    // Algoritmo "Re della Collina"
    int indice_moda = 0; // Ipotizziamo che il primo sia il massimo
    
    for (int i = 1; i < N; i++) { // Partiamo dal secondo (i=1)
        if (fre[i] > fre[indice_moda]) { // Se l'attuale è maggiore del campione salvato
            indice_moda = i; // Abbiamo un nuovo campione!
        }
    }

    // --- CALCOLO MEDIA ---
    media = (float)somma / N; // Casting a float per avere i decimali

    // --- OUTPUT FINALE ---
    printf("\n\nSomma: %d", somma);
    printf("\nLa media e': %.2f", media);
    printf("\nLa moda e': %d (compare %d volte)\n", arr[indice_moda], fre[indice_moda]);

    return 0;
}