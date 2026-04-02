/*

    Calcolare valore totale,
    Trovaare valore massimo e minimo

*/

#include <stdio.h>



int main(){

    int mtx[3][3];
    int sum = 0;

    printf("Enter value to fill matrix 3x3\n");

    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            scanf("%d", &mtx[i][j]);
        }
    }

    printf("MTX:\n");

    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            printf("%d\t", mtx[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            sum += mtx[i][j];
        }
    }

    printf("The sum of all value is %d\n", sum);


    int max = mtx[0][0];
    int min = mtx[0][0];

    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            if (mtx[i][j] > max){
                max = mtx[i][j];
            }
            if (mtx[i][j] < min){
                min = mtx[i][j];
            }
        }
    }


    printf("\nMax value is: %d, Min value is: %d", max,min);



}