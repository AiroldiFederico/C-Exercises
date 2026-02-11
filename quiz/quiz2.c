#include <stdio.h>
#define DIM 10

int main() {
    int arr[DIM];
    
    int max_len = 1;        // Lunghezza massima trovata (minimo è 1)
    int best_start = 0;     // Indice inizio della sequenza migliore
    int best_end = 0;       // Indice fine della sequenza migliore

    int current_len = 1;    
    int current_start = 0;

  
    for (int i = 0; i < DIM; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 1; i < DIM; i++) {
        
        if (arr[i] == arr[i-1]) {
  
            current_len++; 
        } else {
            current_len = 1;
            current_start = i;
        }


        if (current_len > max_len) {
            max_len = current_len;
            best_start = current_start;
            best_end = i;
        }
    }

    printf("%d %d %d\n", max_len, best_start, best_end);

    return 0;
}