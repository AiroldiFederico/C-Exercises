#include <stdio.h>
#define M 4
#define N 4

void printMatrix(int mtx[N][M]){
	for (int i = 0; i < N; ++i){
		for (int j = 0; j < M; ++j){
			printf("%d\t", mtx[i][j]);
		}
		printf("\n");
	}
}

void shiftMatrix(int mtx[N][M]){

	int app;
	app = mtx[N-1][M-1];

	for (int i = N-1; i >= 0; i--)
	{
		for (int j = M-1; j > 0; j--){
			mtx[i][j] = mtx[i][j-1];
		}
		if(i > 0){
            mtx[i][0] = mtx[i-1][M-1];
		}
	}
	mtx[0][0] = app;

}


int main()
{


	int mtx[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},};
	int k;

	printf("Enter a value to shif matrix value\n");
	scanf("%d", &k);

	printf("Original Matrix: \n");
	printMatrix(mtx);

	for (int i = 0; i < k; ++i)
	{
		shiftMatrix(mtx);
	}

	printf("Matrix after shift: \n");
	printMatrix(mtx);
	
	return 0;
}