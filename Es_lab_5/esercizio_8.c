/*
Es8: Chiamiamo coppia di quadrati (CQ) una coppia <a,b> di numeri interi che sono uno il quadrato dell’altro. Esempio <9,3> oppure <-3,9> (infatti 9=3*3). 
Si codifichi un programma C che legge da tastiera una sequenza che termina con 99 (di lunghezza a priori illimitata) di numeri interi e stampa a video quante coppie di numeri consecutivi all’interno della sequenza rappresentano una CQ. 
Ad esempio: 2 4 16 0 3 9 99 contiene 3 CQ: <2,4> <4,16> e <3,9>
*/






#include <stdio.h>
#include <stdlib.h>
#define SENTINELLA 99



int main(){

	int num1, num2, tot=0;

	printf("enter a couple of number, for terminate enter 99: ");


	scanf("%d", &num1);

	if(num1!=SENTINELLA){
		do{
			scanf("%d", &num2);
			if(num1!=SENTINELLA){
				if(num1*num1==num2 || num2*num2==num1){
					tot++;
				}
			}
			num1=num2;

		}while(num2!=SENTINELLA);
	}

	
	printf("Number of couple of square entered: %d",tot);


	return 0;
}