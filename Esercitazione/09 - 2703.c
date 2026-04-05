#include <stdio.h>


int main(){

    int arr[5] = {10,20,30,40,50};
    int k;

    printf("insert value to shift number order: \n");
    scanf("%d", &k);
    for (int i = 0; i < 5; i++){
        printf("%d\t", arr[i]);
    }

    printf("\n");

    if (k > 0){
        for (int i = 0; i < k; i++){
            int app = arr[4];
            for (int j = 4; j > 0; j--){
                arr[j] = arr[j-1];
            }
            arr[0] = app;
        }
    } else if ( k < 0) {
        k *= -1;
        for (int i = 0; i < k; i++){
            int app = arr[0];
            for (int j = 0; j < 4; j++)
            {
                arr[j] = arr[j+1];
            }
            arr[4] = app;
        }
    }
    
    for (int i = 0; i < 5; i++){
        printf("%d\t", arr[i]);
    }
    

    return 0;
}