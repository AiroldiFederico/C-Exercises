/*

Dato in ingresso un array di char di massimo 30
caratteri (spazio per terminare l'inserimento),
stampare a terminale un intero che rappresenta la
dimensione della sottosequenza più lunga che può 
essere formata da essa senza alcun carattere ripetuto
all’interno della sottosequenza.
Ad esempio:
 array: abcabcab OUTPUT 3
 perchè la sotto sequenza più lunga è abc.
 array: aaaa OUTPUT 1 perché la sotto sequenza più
lunga è "a".
 array: abbbcbbbacddb OUTPUT 4
 perché la sotto sequenza più lunga è bacd.

*/



#include <stdio.h>

#define MAX 30

int main() {
    char arr[MAX];
    int n = 0; // Numero effettivo di caratteri inseriti
    char temp;

    // --- 1. INPUT (Come abbiamo visto prima) ---
    printf("Inserisci caratteri (SPAZIO per terminare): ");
    while (n < MAX) {
        scanf("%c", &temp);
        if (temp == ' ' || temp == '\n') {
            break;
        }
        arr[n] = temp;
        n++;
    }

    // --- 2. LOGICA: TROVA LA SOTTOSEQUENZA ---
    int max_len = 0; // Qui memorizzeremo il record massimo

    // Ciclo ESTERNO (i): Decide da dove inizia la sottosequenza
    for (int i = 0; i < n; i++) {
        
        int current_len = 0; // Lunghezza della sequenza che parte da 'i'

        // Ciclo INTERNO (j): Prova ad allungare la sequenza verso destra
        for (int j = i; j < n; j++) {
            
            // ORA IL DIFFICILE: Dobbiamo controllare se arr[j] esiste già
            // nel pezzo che stiamo analizzando (da i fino a j-1)
            int duplicato_trovato = 0;

            for (int k = i; k < j; k++) {
                if (arr[k] == arr[j]) { // Se la lettera attuale è uguale a una passata
                    duplicato_trovato = 1;
                    break;
                }
            }

            // Se abbiamo trovato un duplicato, questa sottosequenza è finita.
            if (duplicato_trovato == 1) {
                break; // Esci dal ciclo 'j', passiamo al prossimo 'i'
            } else {
                // Se non è un duplicato, la sequenza si allunga!
                current_len++;
            }
        }

        // Se la lunghezza appena calcolata è il nuovo record, aggiorniamo max_len
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    printf("Output: %d\n", max_len);

    return 0;
}