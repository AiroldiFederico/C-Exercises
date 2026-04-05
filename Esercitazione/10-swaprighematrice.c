#include <stdio.h>

int main(){

    int mtx[4][4];
    int n = 1;
    int k;
    int y;

    printf("Insert a value for swap two row\n");
    do{
        scanf("%d", &k);
    } while (k < 0 || k > 3);

    printf("another value different from previous\n");
    do{
        scanf("%d", &y);
    } while (y < 0 || y > 3 || y == k );


    printf("\nmatrix before swap\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            mtx[i][j] = n;
            n++;
        }
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d\t", mtx[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\nmatrix after swap\n");
    for (int j = 0; j < 4; j++){
        int app = mtx[y][j];
        mtx[y][j] = mtx[k][j]; 
        mtx[k][j] = app; 
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d\t", mtx[i][j]);
        }
        printf("\n");
    }

    return 0;
}