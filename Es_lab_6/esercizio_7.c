/*
Es7: Chiedere all’utente una sequenza di numeri interi che termina con l’inserimento dello 0 (e in ogni caso lunga al massimo 100 elementi). Creare un array che contenga tutti e soli valori distinti della sequenza (ovvero omettendo i duplicati). Visualizzare l’array e il numero di elementi unici inseriti. 
*/

#include <stdio.h> 
#define MAX 10

int main(void){

	int arr[MAX] = {};
	int i = 0;
	int a;
	int match = 0;
	int count = 0;


	while( i < MAX){
		printf("enter integer number or 0 to continue: ");
		scanf("%d", &a);

		if ( a == 0){
			break;
		}


		for (int z = 0; z < MAX; ++z)
		{
			if(arr[z]==a){
				match = 1;
			}
		}

		if (match){
			match = 0;
			continue;
		} else {
			arr[i]=a;
		}


		i++;

	}

	for (int j = 0; j < MAX; ++j)
	{
		if (arr[j] != 0){
			count++;
		}
		printf("%d ", arr[j]);
	}

	printf("\nunique numbers in array are: %d ", count);
	

	return 0;
}