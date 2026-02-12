/*
Scrivere un sottoprogramma che riceve due
numeri interi positivi e calcola l'elevamento a potenza
del primo rispetto al secondo, restituendo il risultato.
Scrivere un sottoprogramma che stampa a video la
radice ennesima intera di un numero intero positivo. Il
sottoprogramma prende come parametri il numero e il
grado della radice. Il sottoprogramma restituisce 1 se
la radice intera è precisa, in alternativa 0. Scrivere un
programma che utilizza tale sottoprogramma per
calcolare la radice ennesima intera di un numero e di
un grado chiesti all'utente, e ne visualizza il risultato.
*/

/*
1 - Scrivere un sottoprogramma che riceve due
numeri interi positivi
2 - Calcolo elevamento a potenza di a rispetto a b
3 - Scrivere un sottoprogramma che stampa a video la
radice ennesima intera di un numero intero positivo
*/



#include <stdio.h>

int power(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++) {
        res = res * base;
    }
    return res;
}

int rad(int numero, int indice) {
    int i = 0;
    int p = 0;

    
    if (numero == 0) return 0;
    if (numero == 1) return 1;

    
    while (1) {
        i++; 
        p = power(i, indice); 
        if (p == numero) {
            return i;
        }
        if (p > numero) {
            return 0; 
        }
    }
}


int main(){

    int a,b,c,d;

    do{scanf("%d", &a);}while(a<0);
    do{scanf("%d", &b);}while(b<0);
    do{scanf("%d", &c);}while(c<0);
    do{scanf("%d", &d);}while(d<0);

    int value = rad(c,d);



    printf("%d", power(a,b));
    printf("\n");
    if (value == 0){
        printf("non intera");
    } else {
        printf("%d", rad(c,d));
    }
    

    return 0;
}