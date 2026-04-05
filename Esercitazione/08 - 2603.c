#include <stdio.h>

int main(){
	int arr[5] = {10,20,30,40,50};
	int app[5];
	int k = 0;
	for(int i=0; i < 5; i++){
		printf("%d\t", arr[i]);
	}
	printf("\nInsert a params to shift numbers: ");
	scanf("%d", &k);
	for (int i = 0; i < 5; i++){
		app[i] = arr[i];
	}

	for(int i = 0; i < k; i++){
		for (int j = 0; j < 5; j++){
			if (j+1 == 5){
				arr[0] = app[j];
			} else {
				arr[j+1] = app[j];
			}
		}
		for (int x = 0; x < 5; x++){
			app[x] = arr[x];
		}
	}	
	
	for(int i=0; i < 5; i++){
		printf("%d\t", arr[i]);
	}
	return 0;
}
