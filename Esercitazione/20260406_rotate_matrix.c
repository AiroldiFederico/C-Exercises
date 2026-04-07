#include <stdio.h>

#define N 3
#define M 3

void printMtx(int mtx[N][M]){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d\t", mtx[i][j]);
        }
        printf("\n");
    }
}

void rotateMtx(int mtx[N][M]){
    //trasposta
    int tmtx[N][M];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            tmtx[j][i] = mtx[i][j];
        }
    }
    //swap
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            mtx[i][j] = tmtx[i][M-1-j];
        }
    }
    
}


int main(){
    int mtx[N][M] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("Original Matrix: \n");
    
    printMtx(mtx);
    printf("Rotate: \n");
    rotateMtx(mtx);
    printMtx(mtx);

    return 0;
}