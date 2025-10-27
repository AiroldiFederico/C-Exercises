/*
Scrivere un programma in C che richiede all’utente di inserire i coefficienti a, b, c di un
polinomio di secondo grado ax2 + bx + c = 0.
Se a è pari a zero, il programma informa che il polinomio è di grado inferiore al secondo.
In caso contrario, il programma calcola il determinante (det) dell’equazione di secondo grado e informa l’utente
se le soluzioni sono reali e distinte (det>0), coincidenti (det=0) o complesse coniugate (det<0).
*/


#include <stdio.h>
#include <math.h>

int main(){

  double a,b,c;
  double det, x1, x2;

  printf("Equazione di secondo grado ax^2 + bx + c\n\n");
  printf("inserisci il coefficiente di a: ");scanf("%lf", &a);
  printf("inserisci il coefficiente di b: ");scanf("%lf", &b);
  printf("inserisci il coefficiente di c: ");scanf("%lf", &c);


  printf("\nEquazione:  %.2lfx^2 + %.2lfx + %.2lf = 0\n\n", a,b,c);

  // Controllo se a = 0 (non è di secondo grado)
  if (a == 0) {
    printf("Il coefficiente 'a' è zero.\n");
    printf("Il polinomio è di grado inferiore al secondo.\n");
    return 0;
  }

  // Calcolo del determinante
  det = b*b - 4 * a * c;
  
  printf("Il Determinante è %.2lf\n\n", det);

  // Analisi del determinante
  if (det > 0) {
      // Due soluzioni reali e distinte
      x1 = (-b + sqrt(det)) / (2 * a);
      x2 = (-b - sqrt(det)) / (2 * a);
      
      printf("Le soluzioni sono REALI e DISTINTE:\n");
      printf("x1 = %.4lf\n", x1);
      printf("x2 = %.4lf\n", x2);
  } 
  else if (det == 0) {
      // Due soluzioni coincidenti
      x1 = -b / (2 * a);
      
      printf("Le soluzioni sono REALI e COINCIDENTI:\n");
      printf("x1 = x2 = %.4lf\n", x1);
  } 
  else {
      // Soluzioni complesse coniugate
      double parte_reale = -b / (2 * a);
      double parte_immaginaria = sqrt(-det) / (2 * a);
      
      printf("Le soluzioni sono COMPLESSE CONIUGATE:\n");
      printf("x1 = %.4lf + %.4lfi\n", parte_reale, parte_immaginaria);
      printf("x2 = %.4lf - %.4lfi\n", parte_reale, parte_immaginaria);
  }

  return 0;

}
