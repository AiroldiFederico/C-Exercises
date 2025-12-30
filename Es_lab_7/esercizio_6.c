/*
Es6: Data una matrice int M[D1][D2], si dice che due elementi M[i][j] e M[p][q] sono adiacenti se 
|i-p|=1 oppure |j-q|=1.
Un elemento M[i][j] di M è detto massimo direzionale se 
esistono due elementi M[p][q] e M[r][s], 
tali che
M[p][q] > M[i][j] < M[r][s]
M[p][q]  e M[i][j]  sono adiacenti
M[i][j] e M[r][s] sono adiacenti
Scrivere un programma che calcoli il numero di massimi direzionali di M
*/



#include <stdio.h>


int main( void ){
    int M[4][5]={
        {1,4,5,4,3},
        {2,2,4,2,2},
        {6,4,2,3,1},
        {1,5,1,2,8}
    };
    int count=0;
    for(int j=1;j<4;j++){
        if(M[0][j-1]<M[0][j] && M[0][j]> M[0][j+1]){
            count++;
            printf("M[%d][%d] e\' massimo direzione orizzontale u\n", 0,j);
        }
    }
    for(int j=1;j<4;j++){
        if(M[3][j-1]<M[3][j]&& M[3][j]>M[3][j+1]){
            count++;
            printf("M[%d][%d] e\' massimo direzione orizzontale d\n", 3,j);
        }
    }
    for(int i=1;i<3;i++){
        if(M[i-1][0]<M[i][0]&&M[i][0]> M[i+1][0]){
            count++;
            printf("M[%d][%d] e\' massimo direzione verticale l\n", i,0);
        }
    }
    for(int i=1;i<3;i++){
        if(M[i-1][4]<M[i][4]&& M[i][4]>M[i+1][4]){
            count++;
            printf("M[%d][%d] e\' massimo direzione verticale r\n", i,4);
        }
    }
    for(int i=1;i<3;i++)
        for(int j=1;j<4;j++){
            if(M[i][j-1]<M[i][j]&& M[i][j]>M[i][j+1]){
                count++;
                printf("M[%d][%d] e\' massimo direzione orizzontale\n", i,j);
            }
            if(M[i-1][j]<M[i][j]&&M[i][j]> M[i+1][j]){
                count++;
                printf("M[%d][%d] e\' massimo direzione verticale\n", i,j);
            }
        }
    printf("\nnella matrice ci sono %d massimi direzionali \n",count);
}
 