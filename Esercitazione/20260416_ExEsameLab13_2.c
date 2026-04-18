/*

    Scrivere un programma C in grado di seguire le seguenti specifiche:

    - richiede all’utente 10 numeri interi non negativi nell’intervallo [0,10] e li memorizza in un array.
    - Calcola la media dei voti inseriti.
    - Calcola la moda dei voti inseriti.
    - La moda è il valore che compare più frequentemente. 
        In caso ci siano più numeri con la stessa frequenza ritornare uno qualsiasi di essi.
    - Usare un array aggiuntivo per memorizzare le frequenze.

*/

#include <stdio.h>
#define L 10

int mediaNum(int arr[]){
    int sum = 0;
    int media;
    for (int i = 0; i < L; i++){
        sum += arr[i];
    }
    media = sum / L;
    return media;
}


int modaNum(int arr[]){
    int freq[11] = {0};  // freq[v] = quante volte compare v
    
    for(int i = 0; i < L; i++)
        freq[arr[i]]++;  // se arr[i]=5, incrementa freq[5]
    
    int moda = 0;
    for(int i = 1; i <= 10; i++)
        if(freq[i] > freq[moda])
            moda = i;
    
    return moda;
}

int main(){

    int arr[L];
    printf("Insert 10 numbers\n");
    int n, media,moda;
    for (int i = 0; i < L; i++){
        do{
            scanf("%d", &n);
            arr[i] = n;
        }while(n<0);
    }
    
    media = mediaNum(arr);
    moda = modaNum(arr);

    printf("Media: %d, Moda: %d", media, moda);

    return 0;
}