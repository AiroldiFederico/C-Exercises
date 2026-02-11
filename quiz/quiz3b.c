#include<stdio.h>
#define N 4

int main()
{
  int m[N][N];
  int diagonale = 0;
  int identita = 1;
  
  for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			scanf("%d", &m[i][j]);
		}
	}
	

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{

			if(j == diagonale && i == diagonale){
				if(m[j][i] != 1){
					identita = 0;
				}
			}

			if(j != diagonale && i != diagonale){
				if(m[j][i] != 0){
					identita = 0;
				}
			}

		}

		diagonale++;

	}
	
  if(identita){
      printf("1");
  } else {
      printf("0");
  }
  
  return 0;
}