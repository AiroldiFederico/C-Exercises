/*
 Scrivere un programma C che chiede all’utente due numeri interi n1 e n2 e un
carattere op (appartenente all’insieme {‘+’,’-’,’*’,’/’}).
Il programma calcola e stampa a video il risultato dell’operazione corrispondente a op applicata ai numeri n1 e n2.
*/




#include <stdio.h>

int main(void) {
    int num1, num2, res;
    char op;

    printf("Inserisci n1 op n2 (es. 5 + 3): ");

    // Leggiamo tutto in un colpo solo
    if (scanf("%d %c %d", &num1, &op, &num2) != 3) {
        printf("Errore: input non valido.\n");
        return 1;
    }

    // Controlliamo che l'operatore sia valido
    if (op != '+' && op != '-' && op != '*' && op != '/') {
        printf("Errore: operatore '%c' non valido. Usa +, -, *, /\n", op);
        return 1;
    }

    // Controllo divisione per zero
    if (op == '/' && num2 == 0) {
        printf("Errore: divisione per zero!\n");
        return 1;
    }

    // Calcolo con switch (più pulito degli if multipli)
    switch (op) {
        case '+': res = num1 + num2; break;
        case '-': res = num1 - num2; break;
        case '*': res = num1 * num2; break;
        case '/': res = num1 / num2; break;
    }

    // Output chiaro
    printf("%d %c %d = %d\n", num1, op, num2, res);

    return 0;
}
