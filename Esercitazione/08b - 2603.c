#include <stdio.h>


int main(){

    int arr[5] = {10,20,30,40,50};
    int k;

    printf("insert value to shift array: \n");
    scanf("%d", &k);

    for (int i = 0; i < 5; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < k; i++){
        int app = arr[4];
        for (int j = 4; j > 0; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = app;
    }
     
    for (int i = 0; i < 5; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}