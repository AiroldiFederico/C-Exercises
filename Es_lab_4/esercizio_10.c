/*
Es 10: Scrivere un programma che, chiesti all'utente due
numeri interi positivi a e b comunica all'utente se si tratta di
una coppia di numeri affiatati oppure no. Definiamo due
numeri affiatati se sono diversi tra loro e la loro somma è pari
al prodotto delle cifre che li compongono. Ad esempio (14, 34) e
(63, 81) sono coppie di numeri affiatati perché
 14 + 34 = 1 x 4 x 3 x 4 = 48
 63 + 81 = 6 x 3 x 8 x 1 = 144
*/


#include <stdio.h>



int main(){

	int a,b;
	int x=10,num, num2,j=10,numb, numb2;
	int mula=1,mulb=1;


	printf("insert value of number a: ");
	do{
		scanf("%d", &a);
	}while(a<=0);
	printf("insert value of number b: ");
	do{
		scanf("%d", &b);
	}while(b<=0);


	// Calculate sum and product of digit of a
	while(num != a){
		num = a%x;
		num2 = num/(x/10);
		mula = mula*num2;
		x = x*10;
	}

	// Calculate sum and product of digit of b
	while(numb != b){
		numb = b%j;
		numb2 = numb/(j/10);
		mulb = mulb*numb2;
		j = j*10;
	}

	if(a != b){

		int sumnum = a+b;
		int molnum = mula*mulb;

		if(sumnum == molnum){
			printf("The number entered are 'affiatati'");
		} else {
			printf("The number entered are not 'affiatati'");
		}

	}


	return 0;
}