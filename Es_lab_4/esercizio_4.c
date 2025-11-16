/*
Es 4: Scrivere un programma che ricevuto in ingresso
due numeri interi positivi a e b (se così non è, li richiede),
visualizza un rettangolo di dimensione a*b
usando il carattere ‘*’ sui bordi e il carattere ‘X’ all’interno. 
*/

#include <stdio.h>

int main(){


	int a,b,i,j;

	printf("insert value of side a: ");
	do{
		scanf("%d",&a);
	}while(a<=0);

	printf("insert value of side b: ");
	do{
		scanf("%d",&b);
	}while(b<=0);


	for(i = 0; i <= a; i++){
		for(j = 0; j <= b; j++){
			if ((i == 0) || (i == a)){
				printf("*");
			} else {
				if ((j == 0) || (j == b)){
					printf("*");
				} else {
					printf("x");
				}
			}
		}
		printf("\n");
	}

	return 0;

}