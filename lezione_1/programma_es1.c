/*
* Es1: Scrivere un programma che riceve in ingresso un angolo in gradi e
* lo converte in radianti (rad= gradi * π / 180°)
*/


#include <stdio.h>
#define PI 3.14159

int main(void){
	
	float deg, rad;

	//input
	printf("inserisci gradi sessagesimali da convertire:");
	scanf("%f", &deg);

	//conversione
	rad = (deg*PI)/180.0;

	//output
	printf("%.2f gradi sessagesimali sono %.2f radianti   \n", deg, rad);

	return 0;
}







