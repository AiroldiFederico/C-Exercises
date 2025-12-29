/*
Es0b: Scrivere un programma che data una matrice M[D1][D2] di char (fare l'inserimento in fase di inizializzazione) trasforma il primo carattere di ogni riga nel corrispondente maiuscolo (se si tratta di una lettera minuscola).
*/



#include <stdio.h>
#define len 4


int main(void){

	char mtrx[len][len];

	printf("Enter a character:\n");

	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len; ++j)
		{
			scanf(" %c", &mtrx[i][j]);
		}
	}

	for (int x = 0; x < len; ++x)
	{
		if (mtrx[x][0] >= 'a' && mtrx[x][0] <= 'z'){
			mtrx[x][0] = mtrx[x][0] - 'a' + 'A';
		}

		for (int y = 0; y < len; ++y)
		{
			printf(" %c ", mtrx[x][y]);
		}
		printf("\n");
	}


	return 0;
}