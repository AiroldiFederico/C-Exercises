/*
    Scrivere un programma che acquisisce una stringa di al più 30 caratteri, la copia al rovescio in un
    secondo array e visualizza il risultato.
*/

#include <stdio.h>
#define L 30




int main(){

    char s[L+1];
    char s2[L+1];
    int len;
    scanf("%s", s);

    for (len = 0; s[len]!='\0'; len++);

    printf("%d\n", len);
    
    for (int i = len - 1; i >= 0; i--){
        s2[len - 1 - i] = s[i];
    }
    s2[len] = '\0'; 
    
    printf("%s\n", s2);
    
    return 0;

}