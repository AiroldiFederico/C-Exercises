/*
 * Es2: Scrivere un programma che chiede all'utente il raggio di un
 * cerchio. L'algoritmo calcola e visualizza l'area di tale cerchio.
 */

#include <stdio.h>
#include <math.h>
#define PI 3.14159

float main(void){

	float r,a;

	//input
	printf("inserisci il raggio del cerchio, e io calcolero l'area: \n");
	scanf("%f", &r);

	//calcolo
	a = PI*pow(r,2);
	

	//output
	printf("l'area del cerchio di raggio %.2f è di: %.2f \n", r,a);
	return 0;
}
