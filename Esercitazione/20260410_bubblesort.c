/*
    implements bubble sort
*/


#include <stdio.h>
#define L 10


void printArr(int arr[L]){
    for (int i = 0; i < L; i++)
        printf("%d ", arr[i]);
}

int main(){

    int arr[L];

    printf("insert ten numbers\n");
    for (int i = 0; i < L; i++)
        scanf("%d", &arr[i]);
    printArr(arr);

    
    int sorted = 0;
    int n = L;
    while(sorted == 0){
        sorted = 1;
        for (int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                int app = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = app;
                sorted = 0;
            }
        }
        n--;
    }

    printf("\nsorted number\n");
    printArr(arr);
    
    return 0;
}