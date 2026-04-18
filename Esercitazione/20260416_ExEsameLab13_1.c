/*

    Scrivere una funzione most che dato un intero positivo n restituisca la sua cifra più
    significativa (quella più a sinistra) nella rappresentazione in base 10.
    - Ad esempio se n è 9234 allora most deve
    restituire 9

*/

#include <stdio.h>

int Most(int n){
    while(n>9){
        n /= 10;
    }
    return n;
}

int main(){

    int number;

    printf("Insert int number: \n");
    scanf("%d", &number);
    int most;
    most = Most(number);
    printf("most number %d", most);

    return 0;
}