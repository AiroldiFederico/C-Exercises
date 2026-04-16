/*
    Scrivere un programma che acquisisce due stringhe di al più 30 caratteri e verifica se sono uguali visualizzando un apposito messaggio.
*/

#include <stdio.h>
#define L 30


int main(){

    char s1[L+1];
    char s2[L+1];

    printf("write a string: \n");
    scanf("%s", s1);
    printf("write a second string: \n");
    scanf("%s", s2);

    int same = 1;
    int len1,len2, len;

    for(len1 = 0; s1[len1]!='\0'; len1++);
    for(len2 = 0; s2[len2]!='\0'; len2++);

    if(len1 != len2){
        same = 0;
    } else {
        for(int i = 0; i < len1; i++){
            if(s1[i] != s2[i]){
                same = 0;
                break;
            }
        }
    }

    same ? printf("Strings are identical") : printf("String are different");


    return 0;
}