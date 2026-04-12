// Write a program to find maximum between three Numbers.
#include <stdio.h>
int main()
{
    int a , b, c;

    printf("Enter the First Number : ");
    scanf("%d", &a);

    printf("Enter the second Number : ");
    scanf("%d", &b);

    printf("Enter the third Number : ");
    scanf("%d", &c);

    if(a >= b && a >= c){
        printf("A is greater.");
    }
    else if(b > c){
        printf("B is Greater.");
    }
    else{
        printf("C is Greater.");
    }
    return 0;
}