/*
Es2: Scrivere un programma che data una matrice quadrata int M[D][D] calcoli la sua trasposta int N[D][D].
NB: N è la trasposta di M se N[i][j]=M[j][i] per ogni j∈[0,D-1] e i∈[0,D-1] 
*/

#include <stdio.h>
#define len 3

int main(void){

	int M[len][len] = {{1,2,3},{4,5,6},{7,8,9}};
	int M2[len][len];

	printf("START MATRIX\n");

	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len; ++j)
		{
			printf(" %d ", M[i][j]);
		}
		printf("\n");
	}

	printf("\nTRASP MATRIX\n");

	for (int x = 0; x < len; ++x)
	{
		for (int y = 0; y < len; ++y)
		{
			M2[x][y] = M[y][x];
			printf(" %d ", M2[x][y]);
		}
		printf("\n");
	}

	return 0;
}