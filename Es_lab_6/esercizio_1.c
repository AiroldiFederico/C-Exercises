/*
Es1: Scrivere un programma C che memorizza in un array i primi 15 numeri di Fibonacci e li stampa a video.

I primi due numeri di Fibonacci, Fib(0) e Fib(1), sono definiti come: 
Fib(0) = 1
Fib(1) = 1
Il numero di Fibonacci di un valore n >= 2 è: 
Fib(n) = Fib(n-2) + Fib(n-1)
*/



#include <stdio.h>



int main(void){

	int fib[15]={};

	for (int i = 0; i < 15; ++i)
	{
		if(i >= 2){
			fib[i] = fib[i-2] + fib[i-1];	
		} else {
			fib[i] = 1;
		}
		
		printf("%d \n", fib[i]);
	}


	return 0;
}