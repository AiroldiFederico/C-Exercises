/*
Si scriva un programma C che definisce una funzione
int next_prime(int last);
 che restituisce il numero primo immediatamente successivo a
last.
 Si utilizzi inoltre la seguente funzione main() per testarne il
funzionamento:
int main( ) {
 int number;
 int c;
 int p = 2;
 printf("Quanti numeri primi vuoi stampare? ");
 scanf("%d”, &number);
 for (c = 0; c < number; c++){
 printf("%d\n", p );
 p = next_prime( p );
 }
}
*/



#include <stdio.h>

int next_prime(int last) {
    int is_found = 0; // Variabile sentinella: 0 = non trovato, 1 = trovato

    // Continuiamo a cercare finché non troviamo il prossimo primo
    while (!is_found) { // Equivalente a while(is_found == 0)
        last++; // Proviamo il numero successivo
        
        // --- CONTROLLO PRIMALITÀ ---
        int is_prime = 1; // Presumiamo sia primo (innocente fino a prova contraria)
        
        // Cerchiamo divisori da 2 fino a last-1
        for (int j = 2; j < last; j++) {
            if (last % j == 0) {
                is_prime = 0; // Abbiamo trovato un divisore! Non è primo.
                break;        // Smettiamo di controllare questo numero
            }
        }
        
        // Se alla fine dei controlli è ancora considerato primo...
        if (is_prime == 1) {
            is_found = 1; // ...abbiamo trovato il nostro numero, usciamo dal while principale
        }
    }
    
    return last;
}

int main( ) {
    int number;
    int c;
    int p = 2;

    printf("Quanti numeri primi vuoi stampare? ");
    scanf("%d", &number); // Ricorda che qui ci voleva la & (che avevi dimenticato nel main dell'esercizio precedente ma qui c'è!)

    for (c = 0; c < number; c++){
        printf("%d\n", p );
        p = next_prime( p );
    }
    
    return 0;
}