/*
Scrivere un sottoprogramma che ricevuto in ingresso un
numero intero, calcola e restituisce il numero intero ottenuto
mettendo le cifre in ordine opposto. Per esempio, se il valore
ricevuto in ingresso e 1245 il sottoprogramma restituisce 5421.
Se il valore ricevuto in ingresso e 190 il sottoprogramma
restituisce 91.
*/



#include <stdio.h>


int func(int a){
    int reva=0;
    for (; a>0; a/=10)
    {
        int digit;
        digit = a%10;
        reva = (reva*10)+(digit);
        
    }
    return reva;
}


int main(){
    int num;
    do{
        scanf("%d", &num);
    }while (num<0);
    printf("%d", func(num));
    return 0;
}