/*
Scrivere un programma che chiede all'utente di inserire un numero intero che corrisponde ad un anno e visualizza 1 se l'anno è bisestile, 0 altrimenti. NOTA:
un anno è bisestile se è divisibile per 4 ma non per 100 o se è divisibile per 400.
*/



#include <stdio.h>
#include <stdbool.h>

int main(){

  int anno;
  bool tipo_anno;

  //input utente
  printf("Inserire un anno qualsiasi: ");
  scanf("%d", &anno);

  //calcolo
  if((anno % 4 == 0) && ((anno % 100 != 0) || (anno % 400 == 0)) ){
    tipo_anno = 1;
  } else {
    tipo_anno = 0;
  }

  //output
  printf("l'anno %d è %d", anno,tipo_anno);

  return 0;
}
