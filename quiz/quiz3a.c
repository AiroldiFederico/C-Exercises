#include<stdio.h>
#define D 4
int main(){
	
	int arr[4][4];
	int sum=0;


	for (int i = 0; i < D; ++i)
	{
		for (int j = 0; j < D; ++j)
		{
			scanf("%d", &arr[i][j]);
		}
	}


	for (int i = 0; i < D; ++i)
	{
		for (int j = 0; j < D; ++j)
		{
			if(arr[i][j]%2 == 0){
				sum++;
				i++;
				j = 0;
			}
		}

	}

	if(sum == 4){
		printf("1");
	}else{
		printf("0");
	}

	
    return 0;
}