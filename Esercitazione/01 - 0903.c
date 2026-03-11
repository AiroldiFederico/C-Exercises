/*

Esercizio 1: Analisi di un array
Obiettivo: Costrutti iterativi, array e sottoprogrammi.
Scrivi un programma che:

Chieda all'utente di inserire 10 numeri interi, salvandoli in un array.

Usi delle funzioni (sottoprogrammi) che ricevono l'array per calcolare il valore massimo, il valore minimo e la media aritmetica.

Suggerimento: Visto che non hai ancora fatto i puntatori e non puoi restituire tre valori contemporaneamente dalla stessa funzione, crea tre funzioni separate (una che restituisce il massimo, una il minimo e una la media) e stampa i risultati nel main.

*/


#include <stdio.h>
#define N 10

int massimo(int arr[]){
    int value = arr[0];
    for (int i = 0; i < N; i++)
    {
        if(value < arr[i]){
            value = arr[i];
        }
    }
    return value;
}

int minimo(int arr[]){
    int value = arr[0];
    for (int i = 0; i < N; i++)
    {
        if(value > arr[i]){
            value = arr[i];
        }
    }
    return value;
}

int media(int arr[]){
    int value = 0;
    for (int i = 0; i < N; i++)
    {
        value += arr[i];
    }
    value /= N;
    return value;
}


int main(){

    int arr[N];

    printf("Inserisci 10 numeri interi \n");

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = massimo(arr);
    int min = minimo(arr);
    int med = media(arr);
    
    printf("\n %d", max);
    printf("\n %d", min);
    printf("\n %d", med);
    
    return 0;
}

