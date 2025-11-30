/*
Es2: Scrivere un programma che dato un array di
caratteri lungo 10 (con i valori letti da standard
input) lo stampa, lo stampa invertito, sostituisce
ogni vocale minuscola con un ’*’.
*/


#include <stdio.h>
#define DIM 10

int main(){

	char word[DIM];
	int i=0;

	printf("insert a word long 10 character: ");


	while(i<=9){
		scanf(" %c",&word[i]);
		i++;
	}

	printf("\n");
	printf("Word entrered: ");

	for (int j = 0; j < DIM; j++) {
        printf("%c", word[j]);
    }

	printf("\n");
	printf("Word revert: ");


	for (int x = DIM - 1; x >= 0; x--) {
        printf("%c", word[x]);
    }

	printf("\n");
	printf("Word revert without consonant: ");


	for (int y = DIM - 1; y >= 0; y--) {
        if (word[y] == 'a' || word[y] == 'e' || word[y] == 'i' || word[y] == 'o' || word[y] == 'u') {
            word[y] = '*';
        }
        printf("%c", word[y]);
    }

	return 0;
}