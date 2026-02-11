/*
Si realizzi un programma nel linguaggio C che, dati due
interi n e m da standard input, facendo uso di una funzione di
nome multipli, calcoli il numero degli interi appartenenti
all’intervallo [1, n] che sono multipli di m. Il programma
principale, al termine della chiamata alla funzione multipli,
dovrà stampare il numero degli elementi appartenenti all’insieme
e poi terminare.
*/

#include <stdio.h>

int multipli(int n, int m){
    int count=0;
    if(m == 0){
        return 0;
    }
    for (; n > 0; n--){
        if (n%m == 0){
            count++;
        }
    }
    return count;
}


int main (){
    int n,m;
    scanf("%d%d", &n, &m);
    printf("%d\n", multipli(n,m));
    return  0;
}