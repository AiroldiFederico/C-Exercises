/*
Es 2: Scrivere un programma che data una sequenza di
numeri positivi che termina con -1 (sentinella, non fa parte
della sequenza) stampa a video la media dei valori e quanti
numeri sono stati inseriti (sentinella esclusa).
*/


#include <stdio.h>

#define MAX_NUM 100

int main(void)
{
    float num[MAX_NUM];
    int arrLength = 0;    
    float sum = 0.0f;
    float avg;
    float value;

    printf("Insert some numbers (end with -1):\n");

    while (arrLength < MAX_NUM) {

    	if (scanf("%f", &value) != 1) {
            /* errore di input */
            printf("Input error\n");
            return 1;
        }

        if (value == -1.0f) {
            /* sentinella: termina l’input */
            break;
        }

        num[arrLength] = value;
        arrLength++;
    }

    printf("The average of numbers: ");

    for (int i = 0; i < arrLength; ++i) {
        printf("%.2f ", num[i]);
        sum += num[i];
    }

    if (arrLength > 0) {
        avg = sum / arrLength;
        printf("is %.2f\n", avg);
    } else {
        printf("cannot be computed (no numbers).\n");
    }

    return 0;
}