/*
Es3: Scrivere un programma che memorizza tutte le righe di una matrice di interi 4x6 in un unico array di interi  lungo 24.
*/


#include <stdio.h>
#define D1 4
#define D2 6
#define D3 24



int main(void){

	int M[D1][D2];
	int V[D3];
	int x = 0;

	printf("enter a values for a Matrix: \n");

	for (int i = 0; i < D1; ++i)
	{
		for (int j = 0; j < D2; ++j)
		{
			scanf("%d", &M[i][j]);
		}
	}


	printf("\nMatrix Result: \n");


	for (int i = 0; i < D1; ++i)
	{
		for (int j = 0; j < D2; ++j)
		{
			printf(" %d ", M[i][j]);
		}
		printf("\n");
	}

	printf("\nVector Result: \n");

	for (int i = 0; i < D1; ++i)
	{
		for (int j = 0; j < D2; ++j)
		{
			V[x] = M[i][j];
			x++;
		}
	}

	for (int i = 0; i < D3; ++i)
	{
		printf("%d", V[i]);
	}


	return 0;
}