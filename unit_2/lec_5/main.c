#include <math.h>
#include <stdio.h>
int fact (int num);
void reverseSentence();
int prime_Num (int a);
int power(int base,int p);
int main(void) {
    // //q1
    // int a , b;
    // printf("Enter two number(Intervals) :");
    // scanf("%d %d ",&a,&b);
    // for (int i = a ; i <= b ; i++) {
    // int x = prime_Num(i);
    //     if(x) printf("%d ",i);
    // }
    // //q2
    // int num ;
    // printf("Enter a positive number :");
    // scanf("%d",&num);
    // int f = fact(num);
    // printf("the factorial of %d = %d",num,f);
    // //q3
    // printf("Enter a sentence");
    // reverseSentence();
    //q4
    int base , p;
    printf("Enter the base number :");
    scanf("%d",&base);
    printf("Enter the power (positive number):");
    scanf("%d",&p);
    int result = power(base,p);
    printf("%d",result);
    return 0;
}
int prime_Num(int a) {
    int flag  = 1;
    for (int i = 2 ; i <= sqrt(a) ; i++) {
        if (a % i == 0) {
            flag = 0;
            break;
        }

    }
    if (flag)return a;
}
int fact (int num) {
    if (num > 1)
        return num*fact(num-1);
    else
        return 1;
}
void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
int power(int base, int p) {
    return (base * pow(base, p - 1));
}