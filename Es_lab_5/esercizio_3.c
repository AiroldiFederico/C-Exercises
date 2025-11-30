/*
Es3: Scrivere un programma che dato un array di
interi A ed un intero x determina quante
occorrenze di x sono in A.
*/



#include <stdio.h>


int main(){


	int A[8] = {1,-3,1,4,-3,-4,2,-3};
	int x;
	int count = 0;

	printf("Insert value of X: ");
	scanf("%d", &x);

	for (int i = 0; i < 8; ++i)
	{
		if (A[i] == x){
			count++;
		}
	}

	printf("number of occurrences: %d", count);


	return 0;
}