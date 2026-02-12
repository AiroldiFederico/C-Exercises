/*
Scrivere un programma C che acquisisce un
array di 10 interi. Il programma individua e visualizza
tutte le sotto-sequenze di lunghezza massima (cioè non
contenute in una sotto-sequenza più lunga) e maggiore
di 1 costituite da soli numeri pari. Per esempio se
l’utente inserisce l’array: 1 2 4 3 2 6 6 7 8 1,
 il programma visualizzerà le due sotto-sequenze:
 2 4 e 2 6 6.
*/



#include <stdio.h>
#define N 10


int main(){


    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int sequenza = 1;
    int indice = 0;
    int fineseq = 0;

    for (int i = 1; i < N; i++)
    {
        if(arr[i-1]%2 != 0 && arr[i]%2 == 0){ // inizio della sequenza
            indice = i;                     
        } 
        if(arr[i+1]%2 != 0 && arr[i]%2 == 0){ // fine della sequenza
            fineseq = i;                     
        } 
        if (arr[i+1]%2 == 0 && arr[i]%2 == 0){    // attuale numero pari e se quello sucessivo è pari incremento la seuqnza
            sequenza++;
        } else if (sequenza > 1 && arr[i+1]%2 != 0){ // fine sequenza attuale, stampo i valori
            printf("sequenza\n");
            for (int j = indice; j <= fineseq; j++) //stampo la sequenza partendo dal primo numero di esso
            {
                printf("%d", arr[j]);
            }
            printf("\n");
            sequenza = 1;
        } else {                                   // altrimenti sequenza a 1 e continuo il ciclo
            sequenza = 1;
            continue;
        }
    }

    return 0;
}
