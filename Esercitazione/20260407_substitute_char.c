/*
Scrivere un programma che acquisisce una stringa s1 di massimo 50 caratteri e ne costruisce una nuova s2 copiando il contenuto di s1 e sostituendo le vocali
con il carattere *. Infine il programma visualizza s2. Esempio: s1="straniero" → s2="str*n**r*” (inizializzazione stringa in C → non è un carattere).
*/




#include <stdio.h>
#define L 50



int main(){
    char s[L+1];
    char s2[L+1];
    printf("Type a string\n");
    scanf("%s", s);
    int len;
    for(len = 0; s[len]!='\0';len++);

    for (int i = 0; i < len; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            s2[i] = '*';
        } else {
            s2[i] = s[i];
        }
    }

    s2[len] = '\0';

    printf("original string: %s\n",s);
    printf("sub string: %s",s2);
    
    return 0;
}