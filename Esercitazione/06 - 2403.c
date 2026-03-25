/*
Questo esercizio testa meno la matematica e molto di più la tua capacità di ragionamento logico con i cicli. Un "punto di sella" in una matrice è un elemento che è contemporaneamente il più piccolo della sua riga e il più grande della sua colonna.

Obiettivo: Ricerche incrociate e ottimizzazione dei cicli.

Dichiara una matrice quadrata 3x3 e popolala (ti consiglio di sceglierli tu nel codice per testare casi specifici).

Scrivi una funzione che analizza la matrice per trovare se esiste un punto di sella.

L'algoritmo: Per ogni riga, trova prima il valore minimo e memorizza in quale colonna si trova. Poi, controlla se quel valore è anche il massimo in quella specifica colonna. Se sì, hai trovato il punto di sella e puoi stamparne le coordinate e il valore.
*/


#include <stdio.h>


struct Risultato {
    int trovato; 
    int valore;
};
struct Risultato calcStar(int arr[3][3]);

int main()
{
	
	int mtx[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			printf("%d\t", mtx[i][j]);
		}
		printf("\n");
	}

	struct Risultato res = calcStar(mtx);

	if(res.trovato){
		printf("Starnumber: %d", res.valore);
	} else {
		printf("No starnumber found");
	}

	return 0;
}


struct Risultato calcStar(int arr[3][3]){

	struct Risultato res;
	res.trovato = 0;


	// Calcola riga minori
	int low[3];
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			if(j == 0){
				low[i] = arr[i][j];
			} else if (arr[i][j] <= low[i]) {
				low[i] = arr[i][j];
			}
		}
	}

	// Calcola colonna superiori
	int high[3];
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			if(j == 0){
				high[i] = arr[j][i];
			} else if (arr[j][i] >= high[i]) {
				high[i] = arr[j][i];
			}
		}
	}


	// Calcola riga inferiore e colonna superiore
	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 3; ++j){
			if(low[i] == high[j]){
				res.valore = low[i];
				res.trovato = 1;
			}
		}
	}

	return res;

}
