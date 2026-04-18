/*

    Implementare il cifrario di Cesare per 3 posizioni

    - scrivere una funzione cifra()
    - scrivere una funzione decifra()
    - scrivere una funzione verificalettera() per controllare che un carattere sia una lettera minuscola e ritorna 1

    Scrivere un programma che acquisisce un array di char di al massimo 20 caratteri (lo spazio serve per terminare l’inserimento),
    che si assume contenga soltanto lettere minuscole dell'alfabeto, cifre ed altri segni di interpunzione e non lettere maiuscole.
    Mediante l'ausilio dei sottoprogrammi sopra definiti, il programma cifra il messaggio salvandolo in un secondo array e lo stampa a video;
    in seguito, il programma decifra il messaggio cifrato, lo stampa a video e verifica che effettivamente è uguale al messaggio originale.

*/




#include <stdio.h>
#define L 20

char cifra(char c){
    return 'a' + (c - 'a' + 3) % 26;
}

char decifra(char c){
    return 'a' + (c - 'a' - 3 + 26) % 26;
}

int verificaLettera(char c){
    return c >= 'a' && c <= 'z';
}

int main(){
    char str[L+1];
    char str2[L+1];  // cifrato
    char str3[L+1];  // decifrato

    printf("Testo: \n");
    scanf("%s", str);

    int len;
    for(len = 0; str[len] != '\0'; len++);

    // cifra
    for(int i = 0; i < len; i++)
        str2[i] = verificaLettera(str[i]) ? cifra(str[i]) : str[i];
    str2[len] = '\0';

    // decifra
    for(int i = 0; i < len; i++)
        str3[i] = verificaLettera(str2[i]) ? decifra(str2[i]) : str2[i];
    str3[len] = '\0';

    printf("Originale:  %s\n", str);
    printf("Cifrato:    %s\n", str2);
    printf("Decifrato:  %s\n", str3);

    // verifica
    int uguale = 1;
    for(int i = 0; i < len; i++)
        if(str[i] != str3[i]){ uguale = 0; break; }
    
    printf(uguale ? "Coincide con l'originale\n" : "Diverso dall'originale\n");

    return 0;
}