/*
	Es 1: Scrivere un programma che ricevuto in ingresso un
	numero intero positivo (correggere l’eventuale input
	sbagliato) stampa a video tutti i suoi divisori.
*/


#include <stdio.h>


int main(void){

	// Definition
	int num, div;

	//input users
	printf("Inserisci un numero inter: \n");
	scanf("%d", &num);
	printf("\n");

	// Process
		// Check input
		if (num <= 0){
			printf("numero non intero o non divisibile");
			return 1;
		}

		// Computation

		/* execute with fot

		for (div = num; div > 0; div--) {
			if ((num % div) == 0){
				printf("%d divisore di %d\n", div,num);
			}
		}*/

		// execute with While as seen on lecture
		div = num;

		do {
			if ((num % div) == 0){
				printf("%d divisore di %d\n", div,num);
			}
			div--;
		} while(div >= 0);

	//outcome
	return 0;

}