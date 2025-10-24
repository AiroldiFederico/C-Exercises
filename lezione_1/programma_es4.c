/*
 * Scrivere un programma in C che chiede all’utente la durata di due esperimenti in termini di
 * minuti e secondi. Il programma deve calcolare la somma delle durate sistemando
 * opportunamente il risultato in modo tale da visualizzare il numeri di minuti complessivi e
 * secondi. Per esempio, se l’utente inserisce i valori 3 e 40, e 2 e 50, il programma visualizzerà
 * una durata pari a 6 minuti e 30 secondi.
 */



#include <stdio.h>


void main(void){

	//dichiarazione locale
	int in_min1, in_sec1, in_min2, in_sec2, min_tot, sec_tot;

	//input utente
	printf("Quanto dura il primo esperimento?\n");
	printf("minuti primo esperimento:");scanf("%d",&in_min1);
	printf("secondi primo esperimento:");scanf("%d",&in_sec1);
	printf("minuti secondo esperimento:");scanf("%d",&in_min2);
	printf("secondi secondo esperimento:");scanf("%d",&in_sec2);


	//calcolo durata complessiva
	sec_tot = in_sec1 + in_sec2;
	min_tot = in_min1 + in_min2;

	while(sec_tot >= 60){
			min_tot++;
			sec_tot = sec_tot - 60;	
	}

	//output
	printf("durata totale complessiva degli esperimenti:%d minuti e %d secondi\n", min_tot, sec_tot);
	
}
