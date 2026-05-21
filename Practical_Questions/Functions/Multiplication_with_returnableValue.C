#include<stdio.h>
int sum(int a , int b);
int main()
{
    int a , b;
    printf("Enter first Number : ");
    scanf("%d", &a);

    printf("Enter second Number : ");
    scanf("%d", &b);

    int result = sum(a,b);    // arguments or actual arguments
    printf("the Sum of : %d", result);

    return 0;
}

int sum(int a , int b)  // parameters or formal parameters
{
    return a*b;
}