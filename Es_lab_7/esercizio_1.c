/*
Es0a: Scrivere un programma che:
- Legge da tastiera una matrice 4X4 di interi
- La stampa a video
- Conta quanti numeri dispari ci sono in tutta la matrice
- Conta quanti numeri primi ci sono in ogni riga della matrice

NB: compilazione con gcc Es0a_contaDispariEPrimi.c -lm
*/



#include <stdio.h>


int main(void){

	int mtx [4][4];
	int i,j,ref,even,odd;
	i=j=even=odd=0;


	printf("enter values for a 4x4 matrix\n");

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			scanf("%d", &mtx[i][j]);
		}
	}

	printf("\nMatrix: \n");

	for (int a = 0; a < 4; ++a)
	{
		for (int b = 0; b < 4; ++b)
		{

			if(mtx[a][b]%2 == 0){
				even++;
			} else {
				odd++;
			}

			printf("%d ", mtx[a][b]);
		}
		printf("\n");
	}


	printf("\nIn the matrix there are %d even numbers and %d odd numbers", even,odd);

	return 0;
}