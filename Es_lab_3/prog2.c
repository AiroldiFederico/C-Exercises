/*
Scrivere un programma in C che richiede all’utente di inserire i coefficienti a, b, c di un
polinomio di secondo grado ax2 + bx + c = 0. Se a è pari a zero, il programma informa che il polinomio
è di grado inferiore al secondo. In caso contrario, il programma calcola il determinante (det)
dell’equazione di secondo grado e informa l’utente se le soluzioni sono reali e distinte (det>0),
coincidenti (det=0) o complesse coniugate (det<0).
*/

#include <stdio.h>

int main(void){

  //dichiarazione variabili
  int a,b,c,det;

  //input utente
  printf("inserisci i valori del polinomio di secondo grado:\n");
  printf("ax^2: ");scanf("%d", &a);
  printf("bx: ");scanf("%d", &b);
  printf("c: ");scanf("%d", &c);

  //output
  if(a == 0){
    printf("il polinomio è di grado inferiore al secondo\n");
  } else {
    det = (b*b)-4*a*c;

    if (det > 0) {
      printf("il determinante %d è maggiore di 0, ammette due soluzioni reali e distinte\n", det);
    } else if (det == 0) {
      printf("il determinante è %d, il polinomio ha soluzioni reali e coincidenti", det);
    } else if (det < 0) {
      printf("il determinante è %d, il polinomio non ha soluzioni reali, ma complesse coniugate", det);
    }
  }

  return 0;

}


