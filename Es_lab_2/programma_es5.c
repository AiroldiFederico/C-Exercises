/*
* Scrivere un programma in C che chiede all’utente due numeri interi. Il programma calcola e
* visualizza la media dei valori acquisti. Si noti che la media è un valore reale
*/


#include <stdio.h>

void main(void){

	//dichiarazioni 
	int num1, num2;
	float ris;

	//input
	printf("Inserisci due numeri e calcolerò la somma:\n");
	printf("numero 1:");scanf("%d",&num1);
	printf("numero 2:");scanf("%d",&num2);

	//calcolo
	ris = ((float)num1 + (float)num2)/2;
	
	//output
	printf("La media dei due numeri è %.2f\n", ris);

}
