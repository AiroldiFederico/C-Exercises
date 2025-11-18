/*
Es 9: Scrivere un programma che inverta la posizione delle cifre
di un numero intero inserito dall’utente (4321 > 1234). Inoltre,
il programma avvisa se il numero inserito è palindromo (si
legge allo stesso modo da sinistra a destra e viceversa, es: 121,
32123, …). 
*/



#include <stdio.h>

int main(){

	int num, inv, app;

	printf("insert a number: ");
	do{
		scanf("%d",&num);
	}while(num<=0);


	app = 0;
	inv = 0;

	for(int i = 10; i < num*10;){
		app = num%i;
		inv = (inv*i + (app%i))/(i/10);
		i = i*10;
	}

	printf("the number entered %d once inverted became: %d", num,inv);

	if(num == inv){
		printf(" and the number is a palindrome");
	} else {
		printf(" but is not a palindrome");
	}

	return 0;
}