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

struct Statistics{
    int max;
    int min;
    float med;
};

struct Statistics calculateStats(int arr[], int dimension){
    struct Statistics result;
    result.max = arr[0];
    result.min = arr[0];
    int sum = 0;
    for (int i = 0; i < dimension; i++){
        if(arr[i] > result.max){result.max = arr[i];}
        if(arr[i] < result.min){result.min = arr[i];}
        sum += arr[i];
    }
    result.med = (float)sum/dimension;
    return result;
}


int main(){
    int arr[N];
    printf("Insert 10 numbers: \n");
    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    struct Statistics stats = calculateStats(arr, N);
    printf("Max: %d, Min: %d, Med: %.2f", stats.max,stats.min,stats.med);
    return 0;
}