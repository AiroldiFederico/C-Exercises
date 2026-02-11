/*
Scrivere un sottoprogramma che dati due interi, verifica se
il primo è multiplo del secondo e restituisce 1 o 0 al chiamante.
*/



#include <stdio.h>

int multiplo(int a, int b) {

    if (b == 0){
        return 0;
    }
    if (a%b == 0){
        return 1;
    }
    return 0;
}

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", multiplo(a,b));
    return 0;
}