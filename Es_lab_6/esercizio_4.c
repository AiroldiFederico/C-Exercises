/*
Es4: Scrivere un programma C che: 
Richiede all’utente di inserire 20 numeri interi a piacere e li salva in un array.
Crea e stampa un array risultato in cui:
Ogni elemento in posizione pari (n) è uguale alla somma degli elementi dell’array originale in posizione pari dall’inizio fino a n.
Ogni elemento in posizione dispari (m) è uguale alla somma degli elementi dell’array originale in posizione dispari dall’inizio fino a m.
*/

#include <stdio.h>
#define capacity 20



int main(void){


	int num, i=0;
	int arr[capacity] = {};
	int res[capacity] = {};
	int even=0, odds=0;


	printf("enter 20 values: ");
	do{
		scanf("%d", &num);
		arr[i] = num;
		i++;
	}while(i <= 20);


	for (int x = 0; x <= capacity;)
	{
		even = even + arr[x];
		if(x==0){
			res[x] = arr[x];
		}else{
			res[x] = even;
		}
		x = x +2;
	}

	for (int y = 1; y <= capacity;)
	{
		odds = odds + arr[y];
		if(y==1){
			res[y] = arr[y];
		}else{
			res[y] = odds;
		}
		y = y +2;
	}


	printf("\n");

	for (int j = 0; j <= capacity; ++j)
	{
		printf("%d:%d ", j,res[j]);
	}


	return 0;
}