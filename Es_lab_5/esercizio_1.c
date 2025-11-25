/*
Es1: Scrivere un programma C che richiede
all’utente 10 voti (compresi tra 18 e 30, correggere
gli errori) e li memorizza all’interno di un array,
quindi stampa l’array, il voto massimo, minimo e
medio.
*/

#include <stdio.h>


int main(){

	int v[9] = {};
	int vote, i=0, n, ph;
	int maxVote = 0;
	int minVote = 100;


	printf("Enter ten votes between values 18 and 30:\n");
	do{
		do{
			printf("Enter vote n.%d: ", i+1);
			scanf("%d",&vote);
		} while (vote < 18 || vote > 30);

		v[i] = vote;
		i++;
	} while (i<9);

	printf("\n");

	printf("All votes are:\n");

	for(int j = 0; j < 9; j++){
		n = v[j];
		printf("%d ", n);
	}

	for(int x = 0; x < 9; x++){
		ph = v[x];
		if(ph > maxVote){
			maxVote = ph;
		}
	}

	for(int y = 0; y < 9; y++){
		ph = v[y];
		if(ph < minVote){
			minVote = ph;
		}
	}


	printf("\n\n");

	printf("The biggest vote is: %d\n", maxVote);

	printf("\n");

	printf("The smallest vote is: %d\n", minVote);

	return 0;

}