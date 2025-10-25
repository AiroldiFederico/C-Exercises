/*
 *Scrivere un programma C che classifica un
 *carattere immesso da tastiera come: alfabetico (az oppure A-Z), cifra (0-9),
 *speciale (tutti gli altri)
 */

#include <stdio.h>


int main() {
    char c;
    
    printf("Inserisci un carattere: ");
    scanf("%c", &c);
    
    // Classificazione del carattere
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("Il carattere '%c' è alfabetico\n", c);
    } 
    else if (c >= '0' && c <= '9') {
        printf("Il carattere '%c' è una cifra\n", c);
    } 
    else {
        printf("Il carattere '%c' è speciale\n", c);
    }
    
    return 0;
}
