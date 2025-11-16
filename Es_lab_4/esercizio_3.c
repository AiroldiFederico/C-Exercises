/*
Es 3: Scrivere un programma che ricevuto in ingresso
due numeri interi positivi a e b (se così non è, li richiede),
visualizza un rettangolo di dimensione a*b usando il carattere '*’. 
*/




#include <stdio.h>


int main(){


	int a, b;

	printf("insert value of side a: ");
	do{
		scanf("%d",&a);
	}while(a<=0);
	

	printf("insert value of side b: ");
	do{
		scanf("%d",&b);
	}while(b<=0);
	printf("\n");


	for (int i = 0; i < a; i++){

		for (int j = 0; j < b; j++){
			printf("*");
		}
		printf("\n");
	}



	return 0;
}