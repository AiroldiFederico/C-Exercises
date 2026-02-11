/*
Scrivere un sottoprogramma che ricevuto in ingresso un
intero positivo conta e restituisce al chiamante il numero di cifre
che compongono il numero in ingresso e ne sono divisori.
*/


#include <stdio.h>


int function(int a){

    int num;
    int count=0;
    int originale = a;
    for (; a>0; a/=10)
    {
        num = a%10;
        if (num == 0){
            continue;
        }
        if (originale % num == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int num;
    do{
        scanf("%d", &num);
    }while(num<0);
    printf("%d\n", function(num));
    return 0;
}