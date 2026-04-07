#include <stdio.h>

#define N 3
#define M 3

void printMatrix(int mtx[N][M]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d\t", mtx[i][j]);
        }
        printf("\n");       
    }
}

void rotateMatrix(int mtx[N][M]){
    int rmtx[N][M];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            rmtx[j][i] = mtx[i][j];
        }
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            mtx[i][j] = rmtx[i][j];
        }
    }

}

void shiftrow(int mtx[N][M]){

    int rowapp[N];
    for(int j = 0; j < N; j++)
        rowapp[j] = mtx[N-1][j];
    for (int i = N-1; i > 0; i--){
        for(int j = 0; j < N; j++)
            mtx[i][j] = mtx[i-1][j];
    }
    for(int j = 0; j < N; j++)
        mtx[0][j] = rowapp[j];
    
}

void swap13row(int mtx[N][M]){
    int rowapp3[N];
    for(int j = 0; j < N; j++){
        rowapp3[j] = mtx[N-1][j];
    }
    int rowapp1[N];
    for(int j = 0; j < N; j++){
        rowapp1[j] = mtx[0][j];
    }
    for(int j = 0; j < N; j++){
        mtx[0][j] = rowapp3[j];
    }
    for(int j = 0; j < N; j++){
        mtx[2][j] = rowapp1[j];
    }
}

int main(){

    int mtx[N][M] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("Original Matrix \n");
    printMatrix(mtx);

    printf("Swap row\n");
    swap13row(mtx);
    printMatrix(mtx);

    rotateMatrix(mtx);
    printf("Rotated Matrix \n");
    printMatrix(mtx);

    return 0;
}