/*
Es8: Scrivere un programma che chiede all’utente di inserire due sequenze di 5 numeri ciascuna (salvandole in 2 array). Il programma stampa a video se la seconda sequenza è una permutazione della prima. 
*/



#include <stdio.h>
#define lenght 5



int main(void){

	int arr1[lenght] = {};
	int arr2[lenght] = {};
	int x,y,j,i;
	x=y=j=i=0;


	while (i < lenght){
		printf("Enter number for first array: ");
		scanf("%d", &x);
		arr1[i] = x;
		i++;
	}

	while (j < lenght){
		printf("Enter number for second array: ");
		scanf("%d", &y);
		arr2[j] = y;
		j++;
	}





	printf("\narray 1 \n");

	for (int a = 0; a < lenght; ++a)
	{
		printf("%d", arr1[a]);
	}

	printf("\narray 2 \n");

	for (int b = 0; b < lenght; ++b)
	{
		printf("%d", arr2[b]);
	}


	printf("\n");

	int perm = 0;

	for (int c = 0; c < lenght; ++c)
	{
		int ref = arr1[c];

		for (int d = 0; d < lenght; ++d)
		{
			if (arr2[d] == ref){
				perm++;
				break;
			}
		}
	}


	if(perm == 5){
		printf("\nSecond array is a permutation of the first array");
	}


	return 0;
}