/*
Es5: Scrivere un programma che dato un numero intero positivo num inserito da tastiera (correggere eventuali errori in inserimento) e un array di 5 interi di nome cifre contenente tutti numeri maggiori o uguali a zero composti da una sola cifra, verificare se tutte le cifre di num sono presenti nell’array. Ad esempio se num vale 353 e l’array è int cifre[]= {3, 3,0, 7, 4}, l’array non contiene tutte le cifre di num.
*/


#include <stdio.h>


int main(){


	int num,digit;
	int cifre[]= {3, 3, 0, 7, 4};
	int present = 0;


	do {
		printf("insert a positivie integer number: ");
		scanf("%d", &num);
	} while (num < 0);

	int num_originale = num;


	printf("\n");
	
	while(num != 0){
		digit = num%10;
		num = num/10;

		for (int i = 0; i <= 4; ++i)
		{
			present = 0;
			if(cifre[i]==digit){
				present = 1;
				break;
			}
		}

		if (!present){
			break;
		}
	}

	if(present){
		printf("number in array");
	}else{
		printf("number not in array");
	}


	return 0;
}