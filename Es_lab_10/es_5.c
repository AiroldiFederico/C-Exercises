/*
Scrivete una funzione avente due parametri interi b ed e
che calcoli la potenza b^e
*/




#include <stdio.h>

int power(int b, int e){
    int res = 1;
    for (int i = 0; i < e; i++){
        res=res*b;
    }

    return res;
}

int main(){

    int b,e;

    do{
        scanf("%d", &b);
    }while(b<0);

    do{
        scanf("%d", &e);
    }while(e<0);

    printf("%d", power(b,e));

    return 0;
}