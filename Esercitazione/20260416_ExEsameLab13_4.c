/*

    Dato in ingresso un array di char di massimo 30 caratteri (spazio per terminare l'inserimento),
    stampare a terminale un intero che rappresenta la dimensione della sottosequenza più lunga che può 
    essere formata da essa senza alcun carattere ripetuto all’interno della sottosequenza.

    Ad esempio:
    array: abcabcab OUTPUT 3
    perchè la sotto sequenza più lunga è abc.
    array: aaaa OUTPUT 1 perché la sotto sequenza più
    lunga è "a".
    array: abbbcbbbacddb OUTPUT 4
    perché la sotto sequenza più lunga è bacd. 

*/





#include <stdio.h>
#define L 30

int main(){

    char arr[L+1];
    printf("insert string:\n");
    scanf("%s", arr);

    int start = 0;
    int maxLen = 0;

    for(int i = 0; i < L; i++){
        // controlla se arr[i] è già presente nella finestra [start, i-1]
        for(int j = start; j < i; j++){
            if(arr[j] == arr[i]){
                start = j + 1;  // sposta l'inizio dopo il duplicato
                break;
            }
        }
        // aggiorna il massimo
        if(i - start + 1 > maxLen){
            maxLen = i - start + 1;
        }
    }
    

    printf(" max leng %d", maxLen);
    

    return 0;
}