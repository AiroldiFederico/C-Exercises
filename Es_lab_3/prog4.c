/*
Scrivere un programma in C che acquisisce tre
numeri. Il programma verifica se i tre numeri possono
rappresentare le dimensioni dei lati di un triangolo:
devono essere valori positivi e la somma di due numeri
deve essere maggiore del terzo. In caso il controllo
fallisca, il programma deve stampare un apposito
messaggio di errore. Se il controllo è stato superato con
successo, il programma stabilisce che tipo di triangolo
è (isoscele, equilatero o scaleno) e stampa un apposito
messaggio a video.
*/



#include <stdio.h>


int main(){

  unsigned int a,b,c;

  //input user
  printf("inserisci i valori dei lati del triangolo:\n\n");
  printf("lato 'a': "); scanf("%u", &a);
  printf("\nlato 'b': "); scanf("%u", &b);
  printf("\nlato 'c': "); scanf("%u", &c);

  //check if triangle
  if((a+b <= c) || (a+c <= b) || (b+c <= a)){
    printf("Error: not valid values");
    return 1;
  }

  //find triangle
  if ((a == b) && (a == c)){
    printf("\nbased on the values entered the triangle is equilateral");
  } else if ((a == b) || (a == c) || (b == c)) {
    printf("\nbased on the values entered the triangle is isosceles");
  } else {
    printf("\nbased on the values entered the triangle is scalene");
  }

  return 0;
}
