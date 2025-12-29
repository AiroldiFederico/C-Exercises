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
	int i,j,ref,even,odd,prime,isPrime;
	i=j=even=odd=prime=0;


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


			isPrime = 1;

			for (int c = 0; c < 4; ++c)
			{
				
				for (int d = 0; d < 4; ++d)
				{
					int ma1 = mtx[a][b];
					int ma2 = mtx[c][d];

					if(ma1 != 1 && ma1 != ma2 && ma2 != 1){
						int conf = ma1%ma2;
						if(conf==0){
							isPrime = 0;
						}
					}

					if(ma1 == 1){
						isPrime = 0;
					}
				}
			}

			if (isPrime == 1){
				prime++;
				isPrime = 1;
			}


		}
		printf("\n");
	}


	printf("\nIn the matrix there are %d even numbers\n%d odd numbers\nand there are a %d prime numbers", even,odd,prime);

	return 0;
}