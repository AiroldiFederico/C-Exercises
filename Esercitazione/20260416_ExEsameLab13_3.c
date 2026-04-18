/*

    Scrivere un programma C che acquisisce un array di 10 interi.
    Il programma individua e visualizza tutte le sotto-sequenze di lunghezza massima (cioè non
    contenute in una sotto-sequenza più lunga) e maggiore di 1 costituite da soli numeri pari.
    
    Per esempio se l’utente inserisce l’array: 1 2 4 3 2 6 6 7 8 1,
    il programma visualizzerà le due sotto-sequenze: 2 4 e 2 6 6. 

*/



#include <stdio.h>
#define L 10


int main(){
    int arr[L];
    printf("Insert 10 numbers:\n");
    for(int i = 0; i < L; i++){
        scanf("%d", &arr[i]);
    }

    int seq = 0;
    for(int i = 0; i < L; i++){
        if(arr[i] % 2 == 0){
            seq++;
        } else {
            seq = 0;
        }

        // stampa se la sequenza finisce qui (prossimo è dispari o siamo alla fine)
        if(seq > 1 && (i == L-1 || arr[i+1] % 2 != 0)){
            for(int j = i - seq + 1; j <= i; j++){
                printf("%d ", arr[j]);
            }
            printf("\n");
            seq = 0;
        }
    }

    return 0;
}