/*
Es4: Scrivere un programma che dato un array di interi >0 (sicuramente è così, non serve correggere errori) inizializzato in fase di dichiarazione e che finisce con il valore sentinella -1 (dichiarato come costante simbolica STOP), verificare se l’array è in ordine:
Crescente
Decrescente
Nessun ordine
e stampare un opportuno messaggio. Ad esempio l’array int values[] = {7, 4, 5, 4, 2, STOP}; non è in nessun ordine, l’array int values[] = {7, 5, 3, 2, 1, STOP}; è in ordine decrescente, mentre l’array int values[] = {1, 3, 4, 7, 9, STOP}; è in ordine crescente.
*/


#include <stdio.h>
#include <stdbool.h>
#define STOP -1


int main(){

    int crescente = 0;
    int decrescente = 0;
    //int values[] = {7, 4, 5, 4, 2, STOP};
    //int values[] = {7, 5, 3, 2, 1, STOP};
    int values[] = {1, 3, 4, 7, 9, STOP};

    for (int i = 0; values[i] != -1; ++i)
    {

        if(values[i+1] == -1){
            break;
        }

        int num1 = values[i];
        int num2 = values[i+1];

        if(num1 <= num2){
            crescente = true;
        } else {
            crescente = false;
            break;
        }
    }

    for (int j = 0; values[j] != -1; ++j)
    {

        if(values[j+1] == -1){
            break;
        }

        int num1 = values[j];
        int num2 = values[j+1];

        if(num1 >= num2){
            decrescente = true;
        } else {
            decrescente = false;
            break;
        }
    }

    if(crescente){
        printf("Array is in ascending order");
    } else if (decrescente){
        printf("Array is in descending order");
    } else {
        printf("Array is in no order");
    }


    return 0;
}