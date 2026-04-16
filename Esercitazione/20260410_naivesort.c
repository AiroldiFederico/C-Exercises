/*
    Implement naive sort
*/


#include <stdio.h>
#define L 10

void printArr(int arr[], int len){
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int maxPos(int arr[], int len){
    int p = 0;
    for (int i = 1; i < len; i++)  // parte da 1, non 0
        if(arr[i] > arr[p])
            p = i;
    return p;
}

int main(){
    int arr[L];
    printf("Insert %d numbers:\n", L);
    for (int i = 0; i < L; i++)
        scanf("%d", &arr[i]);

    printf("Original:\n");
    printArr(arr, L);

    for (int n = L; n > 1; n--){
        int p = maxPos(arr, n);       // massimo nelle prime n posizioni
        if(p != n-1){                 // se non è già in fondo
            int app = arr[n-1];
            arr[n-1] = arr[p];
            arr[p] = app;
        }
    }

    printf("Sorted:\n");
    printArr(arr, L);

    return 0;
}