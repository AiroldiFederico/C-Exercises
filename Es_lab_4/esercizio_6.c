/*
Scrivere un programma che stampa a video la tavola
pitagorica (un quadrato con le tabelline dei numeri da 1 a
10).
*/



#include <stdio.h>


int main(){


	for(int a = 1; a<=10; a++){
		for(int b = 1; b<=10; b++){
			int c = a*b;
			printf(" %d", c);
		}
		printf("\n");
	}


	return 0;
}