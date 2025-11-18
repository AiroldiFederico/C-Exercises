/*
Es 7: Si definisce triangolare un numero costituito dalla somma
dei primi N numeri interi positivi per un certo N. Esempio:
dato N=4, il numero triangolare Q è 10 (Q=1+2+3+4). Scrivere
un programma che riceva dall’utente un numero intero positivo
e stampi a video se è o meno triangolare (ossia se può essere
scritto come somma dei primi N interi consecutivi).
*/


#include <stdio.h>

int main(){

	int n, a=0, i = 0;

	printf("insert number to know if its triangular number: ");
	do{
		scanf("%d", &n);
	}while(n<=0);


	while(a < n){
		a += i;
		i++;
	}

	if(a==n){
		printf("%d is a triangular number", n);
	} else {
		printf("%d is not a triangular number", n);
	}

	return 0;
}