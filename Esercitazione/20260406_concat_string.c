/*
    Scrivere un programma che acquisisce due stringhe di al più 30 caratteri e le concatena in un terzo array
*/


#include <stdio.h>
#define L 30

int main(){
    char s1[L+1];
    char s2[L+1];
    char s3[2*L+1]; 
    int len1, len2;

    printf("Insert first string: \n");
    scanf("%s", s1);
    printf("Insert second string: \n");
    scanf("%s", s2);

    for(len1 = 0; s1[len1] != '\0'; len1++);
    for(len2 = 0; s2[len2] != '\0'; len2++); 

    // Copia s1 in s3
    for(int i = 0; i < len1; i++)
        s3[i] = s1[i];

    // Aggiungi s2 subito dopo
    for(int j = 0; j < len2; j++)
        s3[len1 + j] = s2[j];

    s3[len1 + len2] = '\0';

    printf("Stringa concatenata: %s\n", s3);

    return 0;
}