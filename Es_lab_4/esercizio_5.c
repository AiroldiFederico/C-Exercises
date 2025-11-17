/*
Es 5: Scrivere un programma che ricevuto in ingresso un numero
intero positivo a (se così non è, lo richiede),
visualizza un quadrato di lato a usando il carattere ‘X’
sulla diagonale principale e il carattere ’*’ altrove.
*/




#include <stdio.h>


int main()
{

	int a, b;


	printf("insert value of side a: ");
	do{
		scanf("%d", &a);
	}while(a<=0);

	b = 0;

	for(int i = 0; i < a; i++){
		for(int j = 0; j < a; j++){
			
			if(b == i & b == j){
				printf(" x");
			} else {
			    printf(" *");
			}
		}
		b++;
		printf("\n");
	}

	
	return 0;
}