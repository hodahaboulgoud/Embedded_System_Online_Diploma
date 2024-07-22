#include <stdio.h>

int main(void) {
    //q1
    // int a ;
    // printf("Enter an integer u want to check : ");
    // scanf("%d\n",&a);
    // if (a%2 == 0)
    //     printf("%d is even ",a);
    // else
    //     printf("%d is odd ",a);
    // //q2
    // char c;
    // printf("Enter an alphabet : ");
    // scanf("%c",&c);
    // switch (c) {
    //     case 'a' :
    //         printf("%c is a vowel. ",c);
    //         break;
    //     case 'e' :
    //         printf("%c is a vowel. ",c);
    //     break;
    //     case 'i' :
    //         printf("%c is a vowel. ",c);
    //     break;
    //     case 'o' :
    //         printf("%c is a vowel. ",c);
    //     break;
    //     case 'u' :
    //         printf("%c is a vowel. ",c);
    //     break;
    //     default:
    //         printf("%c is a consonant. ",c);
    //     break;
    // }
    // //q3
    // float x,y,z;
    // printf("Enter three numbers :");
    // scanf("%f %f %f",&x,&y,&z);
    // if (x>y && x>z)
    //     printf("largest number = %f",x);
    // else if (y>z && y>z)
    //     printf("largest number = %f",y);
    // else
    //     printf("largest number = %f",z);

    // //q4
    // float i ;
    // printf("Enter a number :");
    // scanf("%f",&i);
    // if (i == 0)
    //     printf("you entered zero");
    // else if (i > 0)
    //     printf("%d is positive ",i);
    // else
    //     printf("%d is negative",i);

    //q5
    // char c ;
    // printf("Enter a character :");
    // scanf("%c",&c);
    // if( (c >= 65 && c<= 90) || (c>= 97 && c<=122) )
    //     printf("%c is an alphabet",c);
    // else
    //     printf("%c is not an alphabet",c);

    //q6
    // int k;
    // printf("Enter an integer :");
    // scanf("%d",&k);
    // int sum = 0;
    // for (int i = 1 ; i <= k ; i++) {
    //     sum += i;
    // }
    // printf("sum = %d",sum);

    //q7
    // int k;
    // printf("Enter an integer :");
    // scanf("%d",&k);
    // int fact = 1;
    // if (k < 0 )printf("Error!!! factorial of negative number doesn't exist");
    // else if (k == 0 || k == 1)printf("factorial = 1");
    // else {
    //     for (int i = 1 ; i <= k ; i++) {
    //         fact *= i;
    //     }
    //     printf("factorial = %d",fact);
    // }

    //q8
    char op ;
    float a,b;
    printf("Enter operator either + or - or * or / :");
    scanf("%c",&op);
    printf("Enter tow operands :");
    scanf("%f %f",&a ,&b);

    switch (op) {
        case '+' :
            printf("%f + %f = %f",a,b,a+b);
        break;
        case '-' :
            printf("%f - %f = %f",a,b,a-b);
        break;
        case '*' :
            printf("%f * %f = %f",a,b,a*b);
        break;
        case '/' :
            printf("%f / %f =%f",a,b,a/b);
        break;
        default:
            printf("Error!!!");
        break;
    }
    return 0;
}
