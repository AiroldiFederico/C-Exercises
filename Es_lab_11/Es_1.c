/*
Scrivere una funzione most che dato un
intero positivo n restituisca la sua cifra più
significativa (quella più a sinistra) nella
rappresentazione in base 10.
 Ad esempio se n è 9234 allora most deve
restituire 9.
*/



#include <stdio.h>

int most(int num){
    while (num > 9){
        num /= 10;
    }
    return num;
}

int main(){
    int num;
    scanf("%d", &num);
    printf("%d", most(num));
    return 0;
}