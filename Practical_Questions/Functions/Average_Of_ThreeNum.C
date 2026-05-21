#include <stdio.h>

int AvgFunction(int a, int b ,int c)
{
   int average;
   average = (a+b+c)/3;
    return average;
}

int main()
{
    int a,b,c;

    printf("Enter the First Number : ");
    scanf("%d", &a);

    printf("Enter the second Number : ");
    scanf("%d", &b);
    printf("Enter the thrid Number : ");
    scanf("%d", &c);

    int result;

    result =   AvgFunction(a,b,c);
    
    printf("Average is = %d", result);
    
    return 0;
}