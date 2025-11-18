/*
Es 8: Scrivere un programma che acquisisca un indice X tra 0 e 9
(controllare validità del valore inserito) e una sequenza di 10 numeri interi.
Il programma dovrà stampare la somma dei numeri in posizioni minori di X
e il prodotto dei numeri in posizioni successive a X. 
*/

#include <stdio.h>
#define MAX 10


int main(){

	int n, a, b;

	printf("insert a number:");

	do{
		scanf("%d", &n);
	}while(n < 0 || n >= MAX);


	a = 0;
	for(int i = 0; i < n; i++){
		a += i;
	}
	printf("the sum of numbers less of %d is %d \n", n,a);

	b = 1;
	for(int j = n; j < MAX ; j++){
		b = b*j;
	}
	printf("the sum of numbers grater of %d is %d \n", n,b);

	return 0;
}