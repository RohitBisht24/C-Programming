#include<stdio.h>

// function definition
int additionNum()
{
    int a , b;

    printf("Enter the Number : ");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    // printf("sum %d", a+b);
    return sum;
}


// main function
int main()
{
    int result;
    result = additionNum();   // a + b;
    printf("%d", result);

    return 0;
}
