// print factorial of n Numbers.

#include<stdio.h>

int printFactorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = i * fact;
    }
    return fact;
}

int main()
{
    int n; 
    int result;

    printf("Enter the Number to find factorial : ");
    scanf("%d", &n);
    
    result = printFactorial(n);

    printf("Factorial is : %d", result);

    return 0;
}