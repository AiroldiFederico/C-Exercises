/*
Es4: Scrivere un programma  che calcoli quanti elementi in una matrice occorrono almeno due volte.
*/


#include <stdio.h>
#define D1 4

int main(void){

	int M[D1][D1];
	float ocCount = 0;


	printf("Enter values of Matrix: \n");

	for (int i = 0; i < D1; ++i)
	{
		for (int j = 0; j < D1; ++j)
		{
			scanf("%d", &M[i][j]);
		}
	}

	printf("\nMatrix: \n");

	for (int i = 0; i < D1; ++i)
	{
		for (int j = 0; j < D1; ++j)
		{
			printf(" %d ", M[i][j]);
		}
		printf("\n");
	}


	printf("\nOccurencies: ");	

	for (int i = 0; i < D1; ++i)
	{
		for (int j = 0; j < D1; ++j)
		{
			int ref = M[i][j];
			int occ = 0;

			for (int a = 0; a < D1; ++a){
			for (int b = 0; b < D1; ++b){
			int num = M[a][b];
			if (ref == num){
				occ++;
			}
			}}

			if (occ >= 2){
				float w = (1.0)/occ;
				//printf("\nw is %.1f and occ num is %d\n", w,ref);	
				ocCount = ocCount + w;
			}

		}
		
	}

	printf("%d", (int)ocCount);	

	return 0;
}

