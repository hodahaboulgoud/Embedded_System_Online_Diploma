#include <stdio.h>
#include <string.h>

#include "stdlib.h"
int main(void)
{
    // //q1
    // char text [100];
    // char c ;
    // printf("Enter a string : ");
    // gets(text);
    // printf("Enter the character to find frequency :");
    // scanf("%c",&c);
    // int f;
    // for (int i = 0 ; i < 100 ; i++) {
    //       if (text[i] == c) f++;
    //     else continue;
    // }
    // printf("\n frequency of %c = %d",c,f);
    //q2
    // printf("Enter a string :");
    // char text [100];
    // gets(text);
    // printf("length of string : %d",strlen(text));
    //q3
    printf("Enter the string : ");
    char text [100];
    gets(text);
    int len = strlen(text);
    for (int i = len-1  ; i >= 0 ; i--) {
        printf("%c",text[i]);
    }
    return 0;
}
