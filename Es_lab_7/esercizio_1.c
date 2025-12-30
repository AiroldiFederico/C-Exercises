/*
Es1: Scrivere un programma che data una matrice int M[D1][D2] ed un valore intero x inserito da tastiera calcoli quante volte x occorre in M.
*/

#include <stdio.h>
#define D1 5
#define D2 6

int main(){
    int M[D1][D2]={
        {1,2,3,4,4,4},
        {1,2,3,4,4,4},
        {1,2,3,4,4,4},
        {1,2,3,4,4,4},
        {1,2,3,4,4,4},
    };
    int x;
    int count=0;
    
    printf("inserisci numero da cercare");
    scanf("%d",&x);
    
    for(int i=0;i<D1;i++){
        for(int j=0;j<D2 ;j++){
            if(M[i][j] == x)
		count++;
        }
    }
    printf("%d occorre %d volte",x,count);
	
	return(0);
}
