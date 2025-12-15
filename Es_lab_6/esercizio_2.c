/*
Es2: Scrivere un programma C che memorizza in un array di lunghezza 15 tutti i numeri primi minori di 50 e successivamente li stampa a video.
Un numero x è primo se è diverso da 1 ed ha come unici divisori 1 ed x.
NB 0 non è primo in quanto ogni numero divide 0
*/





#include <stdio.h>


int main(void){

	int primi[15] = {};
	int num = 1;
	int primo = 0;
	int incremento = 0;

	for (int i = num; i < 50; ++i)
	{

		int x = 1;

		for (int j = 2; j < 50; ++j)
		{
			if(i != j){
			  if(i%j == 0){
				x = 0;
			  }
			}
		}

		if( i != 1 && i%i == 0 && x){
			primo = 1;
		}

		if(primo){
			primi[incremento] = i;
			incremento++;	
		}

		primo = 0;
	}

	for (int k = 0; k < 15; ++k)
	{
		printf("%d ", primi[k]);
	}

	return 0;
}