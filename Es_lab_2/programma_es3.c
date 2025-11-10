/*
 * Scrivere un programma in C che chiede all’utente due valori interi positivi o nulli che
 * rappresentano in termini di minuti e secondi la durata di un esperimento. Siccome l’utente
 * potrebbe aver inserito erroneamente questi dati, in particolare specificando un valore di
 * secondi maggiore o uguale a 60, il programma deve “risistemare” i due valori, calcolando il
 * numero di minuti e secondi effettivi della durata dell’esperimento, e visualizzare il risultato. Per
 * esempio se l’utente inserisce i valori 2 e 80, il programma calcolerà che l’esperimento è durato
 * 3 minuti e 20 secondi.
*/






#include <stdio.h>

void main(void){

  int in_min, in_sec;
	
  //input utente
	printf("inserisci dei valori interi:\n");
	printf("minuti:");scanf("%d", &in_min);
	printf("secondi:");scanf("%d", &in_sec);

	//controllo overflow secondi
	while(in_sec >= 60){
			in_min++;
			in_sec = in_sec - 60;
	}

	//output
	printf("il tempo corrispondente ai valori che hai inserito è: %d minuti e %d secondi\n", in_min,in_sec);
			
}








