#include <stdio.h>

int main(void){

    int mtx[4][4];
    int even = 0, odd = 0; 
    
    printf("Enter values for a 4x4 matrix:\n");

    // Input
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &mtx[i][j]);
        }
    }

    printf("\nMatrix: \n");


    for (int i = 0; i < 4; ++i) // Ciclo Righe
    {
        int primesInRow = 0; // Resetta il contatore per OGNI riga

        for (int j = 0; j < 4; ++j) // Ciclo Colonne
        {
            int currentNum = mtx[i][j];

            // 1. Controllo Pari/Dispari
            if(currentNum % 2 == 0){
                even++;
            } else {
                odd++;
            }

            // Stampa numero
            printf("%d ", currentNum);

            // 2. Controllo NUMERO PRIMO 
            int isPrime = 1;
            
            if (currentNum <= 1) {
                isPrime = 0; 
            } else {
                // Controlliamo divisibilità da 2 fino a metà del numero
                for (int k = 2; k <= currentNum / 2; k++) {
                    if (currentNum % k == 0) {
                        isPrime = 0; 
                        break; 
                    }
                }
            }

            if (isPrime == 1){
                primesInRow++;
            }
        }
        printf(" -> Primes in this row: %d\n", primesInRow);
    }

    printf("\nTotal Statistics:\n");
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}